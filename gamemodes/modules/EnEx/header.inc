/*!
 * EnEx/header.inc
 *
 > Priority: 9
 */

//include the coordinates
#include "modules\EnEx\enex-info.inc"
 
#define ENEX_ENTER_TIME_LIMIT  (2650)
#define ENEX_ENTER_TICKS       (25)

#define WORLD_MAIN             (0)
#define WORLD_OFFSET           (1000)

#define ENEX_AREA_RADIUS       (1.15)

#define ENEX_TEAM_PROTECTED    (1)


enum e_IGNORE_PICKUPS
{
	      e_iTick,
	Float:e_fX,
	Float:e_fY,
	Float:e_fZ
};

new const
	this.ProtectedInteriors[ ] =
	{
		this.INTERIOR_X7_11S,
		this.INTERIOR_X7_11B,
		this.INTERIOR_X7_11C,
		this.INTERIOR_X7_11D,
		this.INTERIOR_AMMUN1,
		this.INTERIOR_AMMUN2,
		this.INTERIOR_AMMUN3,
		this.INTERIOR_AMMUN4,
		this.INTERIOR_AMMUN5
	},
	
	Float:this.iOffsetZ = 1.00,
	      this.iPickupModel = 1318
;

new
	         this.aiAreaEntry[ ZONE_AREA_UPPER_LIMIT ] = { -1, ... },
	         this.aiAreaConnectedEntry[ ZONE_AREA_UPPER_LIMIT ] = { -1, ... },
	         this.aiInteriorGroup[ sizeof( this.EntryLinks ) ] = { -1, ... },
	         this.aiCurrentEnExArea[ MAX_PLAYERS ] = { -1, ... },
	BitArray:this.baCooldown< MAX_PLAYERS >,
	BitArray:this.baIsInteriorProtected< sizeof( this.ConnectedEntries ) >,
	BitArray:this.baPlayerEntered< MAX_PLAYERS >,
	         this.aiEntryZone[ sizeof( this.EntryLinks ) ] = { -1, ... }
;