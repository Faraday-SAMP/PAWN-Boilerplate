/*!
 * PBP/ClassSelection/functions.inc
 *
 > Priority: 0
 */

stock bool:IsValidWeaponSet(ws) {
	return (ws == INVALID_WEAPON_SET || 0 <= ws < this.NumWeaponSets);
}

stock bool:IsValidSpawnLocation(spawn) {
	return (spawn == INVALID_SPAWN_LOCATION || 0 <= spawn < this.NumSpawnLocations);
}

stock bool:IsValidSpawnArea(spawn)
	return (spawn == INVALID_SPAWN_LOCATION || 0 <= spawn < this.NumSpawnAreas );


stock bool:IsValidClass(class) {
	return (class == INVALID_CLASS || 0 <= class < this.NumClasses);
}

stock CreateWeaponSet(...) {
	if (this.NumWeaponSets >= MAX_WEAPON_SETS) {
		printf("(ClassSelection.CreateWeaponSet) ERROR: Exceeded MAX_WEAPON_SETS.");
		
		return INVALID_WEAPON_SET;
	}
	
	new args = numargs();
	
	if (args & 0b1)
		printf("(ClassSelection.CreateWeaponSet) ERROR: Invalid number of arguments given to ClassSelection.CreateWeaponSet. Expecting (weapon,ammo,...).");
	else {
		new id = this.NumWeaponSets++;
		
		for (new arg = 0; arg < args; arg += 2) {
			new slot;
			
			if (@arg[arg] == WEAPON_ARMOUR)
				slot = this.MAX_WEAPON_SLOT - 1;
			else
			 	slot = GetWeaponSlot(@arg[arg]);
			
			if (slot == WEAPONSLOT_NONE)
				continue;
			
			this.WeaponSets[id][slot][Weapon] = @arg[arg];
			this.WeaponSets[id][slot][Ammo] = @arg[arg + 1];
		}
		
		return id;
	}
	
	return INVALID_WEAPON_SET;
}

stock CreateSpawnLocation(interior = 0, world = 0, Float:x, Float:y, Float:z, Float:rot, Group:group = GROUP_GLOBAL, team = INVALID_TEAM, weapon_set = INVALID_WEAPON_SET) {
	if (this.NumSpawnLocations >= MAX_SPAWN_LOCATIONS) {
		printf("(ClassSelection.CreateSpawnLocation) ERROR: Exceeded MAX_SPAWN_LOCATIONS.");
		
		return INVALID_SPAWN_LOCATION;
	}
	
	if (!IsValidWeaponSet(weapon_set)) {
		printf("(ClassSelection.CreateSpawnLocation) WARNING: Invalid weapon set given.");
		
		weapon_set = INVALID_WEAPON_SET;
	}
	
	new id = this.NumSpawnLocations++;

	this.SpawnLocations[id][Interior]  = interior;
	this.SpawnLocations[id][World]     = world;
	this.SpawnLocations[id][X]         = x;
	this.SpawnLocations[id][Y]         = y;
	this.SpawnLocations[id][Z]         = z;
	this.SpawnLocations[id][Rot]       = rot;
	this.SpawnLocations[id][Group]     = group;
	this.SpawnLocations[id][Team]      = team;
	this.SpawnLocations[id][WeaponSet] = weapon_set;
	
	return id;
}

stock CreateSpawnArea( interior = 0, world = WORLD_MAIN, Float:minx, Float:maxx, Float:miny, Float:maxy, Group:group = GROUP_GLOBAL, team = INVALID_TEAM, weapon_set = INVALID_WEAPON_SET )
{
	if( this.NumSpawnAreas >= MAX_SPAWN_LOCATIONS )
	{
		print(" (ClassSelection.CreateSpawnArea) ERROR: Exceeded MAX_SPAWN_LOCATIONS." );
		return INVALID_SPAWN_LOCATION;
	}
	
	if (!IsValidWeaponSet(weapon_set)) 
	{
		printf("(ClassSelection.CreateSpawnLocation) WARNING: Invalid weapon set given.");
		
		weapon_set = INVALID_WEAPON_SET;
	}
	
	new id = this.NumSpawnAreas++;
	
	this.SpawnAreas[id][Interior] 	= interior;
	this.SpawnAreas[id][World] 		= world;
	this.SpawnAreas[id][minX]       = minx;
	this.SpawnAreas[id][maxX]		= maxx;
	this.SpawnAreas[id][minY]		= miny;
	this.SpawnAreas[id][maxY]		= maxy;
	this.SpawnAreas[id][Group]		= group;
	this.SpawnAreas[id][Team]		= team;
	this.SpawnAreas[id][WeaponSet]	= weapon_set;
	
	this.SpawnAreas[id][RectangleID] = CreateDynamicRectangle( minx, maxx, miny, maxy, world, interior );
	
	return id;
}
	
stock PreLoadSpawnPointsInArea( spawn_area )
{
	new 
		randy = random( sizeof( this.Spawns ) )
	;
	
	for( new i = 0; i < MAX_SPAWN_POINTS; i++ )
	{
		new 
			randy = random( sizeof( this.Spawns ) )
		;
		this.PreLoadSpawn[ i ][ e_fX ] = this.Spawns[ randy ][ e_fX ];
		this.PreLoadSpawn[ i ][ e_fY ] = this.Spawns[ randy ][ e_fY ];
		this.PreLoadSpawn[ i ][ e_fZ ] = this.Spawns[ randy ][ e_fZ ];
		this.PreLoadSpawn[ i ][ e_fRot ] = 180;
		
	}
}


stock CreateClass(skin, spawn_location, weapon_set = INVALID_WEAPON_SET, world = 0, Group:group = GROUP_GLOBAL, team = INVALID_TEAM) {
	if (this.NumClasses >= MAX_CLASSES) {
		printf("(ClassSelection.CreateClass) ERROR: Exceeded MAX_CLASSES.");
		
		return INVALID_CLASS;
	}
	
	if (!IsValidSpawnLocation(spawn_location) || spawn_location == INVALID_SPAWN_LOCATION) {
		printf("(ClassSelection.CreateClass) Invalid spawn location given.");
		
		return INVALID_CLASS;
	}

	if (!IsValidWeaponSet(weapon_set)) {
		printf("(ClassSelection.CreateClass) WARNING: Invalid weapon set given.");

		weapon_set = INVALID_WEAPON_SET;
	}
	
	new id = this.NumClasses++;
	
	this.Classes[id][Skin]          = skin;
	this.Classes[id][SpawnLocation] = spawn_location;
	this.Classes[id][WeaponSet]     = weapon_set;
	this.Classes[id][World]         = world;
	this.Classes[id][Group]         = group;
	this.Classes[id][Team]          = team;
	
	Bit_Let(this.ClassAvailableForAll, id);
	
	return id;
}

stock bool:PlayerCanSelectClass(playerid, class) {
	if (0 <= class < this.NumClasses) {
		if (Bit_Get(this.ClassAvailableForAll, class))
			return true;
		else if (Bit_Get(this.ClassAvailableForPlayer[playerid], class))
			return true;
	}
	
	return false;
}

stock bool:SetFirstAvailableClass(playerid) {
	this.RequestedClass[playerid] = INVALID_CLASS;
	
	for (new i = 0; i < this.NumClasses; i++) {
		if (PlayerCanSelectClass(playerid, i)) {
			this.RequestedClass[playerid] = i;
			
			break;
		}
	}
	
	if (this.RequestedClass[playerid] == INVALID_CLASS)
		printf("(ClassSelection.SetFirstAvailableClass) ERROR: No classes available for player %d.", playerid);
}

stock GetPlayerClass(playerid) {
	return this.PlayerClass[playerid];
}

stock SetClassAvailableForAll(class, bool:set) {
	Bit_Set(this.ClassAvailableForAll, class, set);
}

stock SetClassAvailableForPlayer(class, playerid, bool:set) {
	Bit_Set(this.ClassAvailableForPlayer[playerid], class, set);
}