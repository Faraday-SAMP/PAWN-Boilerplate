/*!
 * PBP/ClassSelection/header.inc
 *
 > Priority: 0
 */

const WORLD_CLASS_SELECTION = this.OFFSET;

const MAX_WEAPON_SETS = 40;
const MAX_SPAWN_LOCATIONS = 100;
const MAX_CLASSES = 500;
const this.MAX_WEAPON_SLOT = MAX_WEAPON_SLOT + 1;
const MAX_SPAWN_AREAS = 25;
const MAX_SPAWN_POINTS = 10;

const INVALID_TEAM = -1;
const INVALID_WEAPON_SET = -1;
const INVALID_SPAWN_LOCATION = -1;
const INVALID_CLASS = -1;

#assert INVALID_TEAM != NO_TEAM

#if !defined WEAPON_ARMOUR
	#define WEAPON_ARMOUR  (100)
#endif


enum this.E_WEAPON_SET {
	Weapon,
	Ammo
};

enum this.E_SPAWN_LOCATION {
	      Interior,
	      World,
	Float:X, Float:Y, Float:Z,
	Float:Rot,
	Group:Group,
	      Team,
	      WeaponSet
};

enum this.E_SPAWN_AREA {
		  Interior,
		  World,
	Float:minX,
	Float:maxX,
	Float:minY,
	Float:maxY,
	Group:Group,
		  Team,
		  WeaponSet,
		  RectangleID,
		  Index
};

enum this.E_CLASS {
	      Skin,
	      SpawnLocation,
	      WeaponSet,
	      World,
	      Team,
	Group:Group
};

enum this.E_SPAWN {

		  e_ClassIdx,
		  e_Interior,
		  e_World,
	Float:e_fX,
	Float:e_fY,
	Float:e_fZ,
	Float:e_fRot
};

enum {

	this.FIRE,
	this.CONS,
	this.MEDI,
	this.SERV
};

enum this.E_PRELOAD {
	Float:e_fX,
	Float:e_fY,
	Float:e_fZ,
	Float:e_fRot
};
	
enum this.E_CAMOPTS {
	e_ClassIdx,
	e_Interior,
	e_World,
	Float:e_fPlayerX,
	Float:e_fPlayerY,
	Float:e_fPlayerZ,
	Float:e_fPlayerA
};

new
	         this.WeaponSets[MAX_WEAPON_SETS][this.MAX_WEAPON_SLOT][this.E_WEAPON_SET],
	         this.SpawnLocations[MAX_SPAWN_LOCATIONS][this.E_SPAWN_LOCATION],
			 this.SpawnAreas[ MAX_SPAWN_AREAS ][ this.E_SPAWN_AREA ],
	         this.Classes[MAX_CLASSES][this.E_CLASS],
			 this.PreLoadSpawn[ MAX_SPAWN_AREAS ][ this.E_PRELOAD ],
	
	         this.NumWeaponSets = 0,
	         this.NumSpawnLocations = 0,
			 this.NumSpawnAreas = 0,
	         this.NumClasses = 0,
	
	BitArray:this.PlayerHasRequestedClass<MAX_PLAYERS>,
	BitArray:this.ClassAvailableForAll<MAX_CLASSES>,
	BitArray:this.ClassAvailableForPlayer[MAX_PLAYERS]<MAX_CLASSES>,
	         this.PreviousClassid[MAX_PLAYERS char],
	         this.RequestedClass[MAX_PLAYERS],
	         this.PlayerClass[MAX_PLAYERS],
	   Group:this.GroupSetOnSpawn[MAX_PLAYERS],
	    Text:this.WeaponsInfo[MAX_PLAYERS] = {INVALID_TEXT_DRAW, ...},
	         this.Interior = 12,
	   Float:this.PlayerPos[] = {2324.0000, -1143.0000, 1050.4922},
	   Float:this.PlayerRot = 148.7130,
	   Float:this.CameraPos[] = {2322.5078, -1146.3310, 1050.7100},
	   Float:this.CameraLookAt[] = {2324.0000, -1143.0000, 1050.5000},
	         this.LastClass[MAX_PLAYERS],
	         this.LastClassSkin[MAX_PLAYERS],
	    bool:this.ShowsSpawn = true,
	   Float:this.CameraDistance = 3.5,
	   Float:this.CameraDistanceZ = 0.5,
	    bool:this.ShowWeapons = true
;

new 
	this.Spawns[ ][ this.E_SPAWN ] = 
	{	
		{ this.FIRE, 0, WORLD_MAIN, 1745.3087, 2077.5161, 10.8203, 201.5947 },
		{ this.FIRE, 0, WORLD_MAIN, 1727.4501, 2082.0044, 10.8203, 235.2470 },
		{ this.FIRE, 0, WORLD_MAIN, 1776.2842, 2066.6489, 10.8203,  84.2816 },
		{ this.FIRE, 0, WORLD_MAIN, 1774.5193, 2084.0483, 10.8203, 182.0426 },
		{ this.FIRE, 0, WORLD_MAIN, 1766.5184, 2077.4226, 10.8203, 184.4865 },
		{ this.FIRE, 0, WORLD_MAIN, 1760.2773, 2076.5188, 10.8203, 184.2985 },
		{ this.FIRE, 0, WORLD_MAIN, 1753.8771, 2075.7888, 10.8203, 176.9664 },
		{ this.SERV, 0, WORLD_MAIN, 2919.4958, 2480.6042, 10.8203, 156.2882 },
		{ this.SERV, 0, WORLD_MAIN, 2893.5481, 2460.3755, 11.0690, 227.3530 },
		{ this.SERV, 0, WORLD_MAIN, 2896.0251, 2403.4373, 11.0625,  90.2997 },
		{ this.SERV, 0, WORLD_MAIN, 2874.5129, 2342.0698, 11.0625,  90.6757 },
		{ this.SERV, 0, WORLD_MAIN, 2847.3718, 2342.5662, 11.0625,   1.5629 },
		{ this.SERV, 0, WORLD_MAIN, 2820.7368, 2346.0745, 11.0625, 359.3069 },
		{ this.SERV, 0, WORLD_MAIN, 2799.2102, 2367.4417, 10.8203, 344.2660 },
		{ this.SERV, 0, WORLD_MAIN, 2794.5352, 2435.0862, 11.0625, 141.0369 },
		{ this.SERV, 0, WORLD_MAIN, 2750.0698, 2480.4458, 11.0625, 194.2180 },
		{ this.SERV, 0, WORLD_MAIN, 2801.4956, 2403.6621, 10.8203, 104.1653 }
	},
	
	this.ReqSpawn[ ][ this.E_CAMOPTS ] = 
	{
		{ this.SERV, 0, WORLD_MAIN, 2849.2178, 2417.0232, 16.2862, 235.1236 }
	}
;

		
		

RegisterConfigVariable: this.Interior;
RegisterConfigArray:    this.PlayerPos;
RegisterConfigVariable: this.PlayerRot;
RegisterConfigArray:    this.CameraPos;
RegisterConfigArray:    this.CameraLookAt;
RegisterConfigVariable: this.ShowsSpawn;
RegisterConfigVariable: this.CameraDistance;
RegisterConfigVariable: this.CameraDistanceZ;
RegisterConfigVariable: this.ShowWeapons;


RegisterUserVariable: "last-class" => this.LastClass;
RegisterUserVariable: "last-class-skin" => this.LastClassSkin;


forward      CreateWeaponSet(...);
forward      CreateSpawnLocation(interior = 0, world = 0, Float:x, Float:y, Float:z, Float:rot, Group:group = GROUP_GLOBAL, team = INVALID_TEAM, weapon_set = INVALID_WEAPON_SET);
forward      CreateClass(skin, spawn_location, weapon_set = INVALID_WEAPON_SET, world = 0, Group:group = GROUP_GLOBAL, team = INVALID_TEAM);
forward bool:IsValidWeaponSet(ws);
forward bool:IsValidSpawnLocation(spawn);
forward bool:IsValidClass(class);
forward bool:PlayerCanSelectClass(playerid, class);
forward bool:SetFirstAvailableClass(playerid);
forward      GetPlayerClass(playerid);
forward      SetClassAvailableForAll(class, bool:set);
forward      SetClassAvailableForPlayer(class, playerid, bool:set);