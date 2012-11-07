/*!
 * EnEx/callbacks/OnGameModeInit.inc
 *
 * OnGameModeInit()
 *
 > Priority: 0
 */

{
	DisableInteriorEnterExits( );
	
	this.aiInteriorGroup[ 180 ] = 180;
	this.aiInteriorGroup[ 186 ] = 180;
	
	// Caligula's
	
	this.aiInteriorGroup[ 150 ] = 150;
	this.aiInteriorGroup[ 151 ] = 150;
	this.aiInteriorGroup[ 152 ] = 150;
	
	// Madd Dogg's
	
	this.aiInteriorGroup[ 60 ] = 60;
	this.aiInteriorGroup[ 61 ] = 60;
	
	// Jizzy's
	
	this.aiInteriorGroup[ 39 ] = 39;
	this.aiInteriorGroup[ 40 ] = 39;
	
	
	//create the pickups and links
	for ( new iConnectedEntry, iWorld, iArea, i = 0; i < sizeof( this.EntryLinks ); i++ )
	{
		iConnectedEntry = this.EntryLinks[ i ][ e_iConnectedEntry ];
		
		CreateDynamicPickup( this.iPickupModel, 1, this.EntryLinks[ i ][ e_fPickupX ], this.EntryLinks[ i ][ e_fPickupY ], this.EntryLinks[ i ][ e_fPickupZ ] + this.iOffsetZ, WORLD_MAIN, this.EntryLinks[ i ][ e_iInterior ] );
		
		iArea = CreateDynamicSphere( this.EntryLinks[ i ][ e_fPickupX ], this.EntryLinks[ i ][ e_fPickupY ], this.EntryLinks[ i ][ e_fPickupZ ] + this.iOffsetZ, ENEX_AREA_RADIUS, WORLD_MAIN, this.EntryLinks[ i ][ e_iInterior ] );
		
		this.aiAreaEntry[ iArea ] = i;
		
		if ( this.aiInteriorGroup[ i ] != -1 )
			iWorld = this.aiInteriorGroup[ i ];
		else
			iWorld = i;
		
		CreateDynamicPickup( this.iPickupModel, 1, this.ConnectedEntries[ iConnectedEntry ][ e_fPickupX ], this.ConnectedEntries[ iConnectedEntry ][ e_fPickupY ], this.ConnectedEntries[ iConnectedEntry ][ e_fPickupZ ] + this.iOffsetZ, WORLD_OFFSET + iWorld, this.ConnectedEntries[ iConnectedEntry ][ e_iInterior ] );
		
		iArea = CreateDynamicSphere( this.ConnectedEntries[ iConnectedEntry ][ e_fPickupX ], this.ConnectedEntries[ iConnectedEntry ][ e_fPickupY ], this.ConnectedEntries[ iConnectedEntry ][ e_fPickupZ ] + this.iOffsetZ, ENEX_AREA_RADIUS, WORLD_OFFSET + iWorld, this.ConnectedEntries[ iConnectedEntry ][ e_iInterior ] );
		
		this.aiAreaConnectedEntry[ iArea ] = i;
	}
	
	for ( new i = 0, j; i < sizeof( this.EntryLinks ); i++ )
	{
		for ( j = 0; j < sizeof( GUI.Zones ); j++ )
		{
			if
			(
				GUI.Zones[ j ][ e_fMinX ] < this.EntryLinks[ i ][ e_fPickupX ] && GUI.Zones[ j ][ e_fMaxX ] > this.EntryLinks[ i ][ e_fPickupX ] &&
				GUI.Zones[ j ][ e_fMinY ] < this.EntryLinks[ i ][ e_fPickupY ] && GUI.Zones[ j ][ e_fMaxY ] > this.EntryLinks[ i ][ e_fPickupY ] &&
				GUI.Zones[ j ][ e_fMinZ ] < this.EntryLinks[ i ][ e_fPickupZ ] && GUI.Zones[ j ][ e_fMaxZ ] > this.EntryLinks[ i ][ e_fPickupZ ]
			)
			{
				this.aiEntryZone[ i ] = GUI.Zones[ j ][ e_iZone ];
				
				break;
			}
		}
	}
	
	
	//protecting interiors which need to be protected
	for ( new i = 0; i < sizeof( this.ProtectedInteriors ); i++ )
		Bit_On( this.baIsInteriorProtected, this.ProtectedInteriors[ i ] );
	
}