/*!
 * EnEx/functions.inc
 *
 > Priority: 0
 */

stock this.SetPlayerEnexEntry( playerid, iEnEx )
{
	if ( !( 0 <= iEnEx < sizeof( this.EntryLinks ) ) )
		return false;
	
	new
		iConnectedEntry = this.EntryLinks[ iEnEx ][ e_iConnectedEntry ]
	;
	
	SetPlayerPos( playerid, this.ConnectedEntries[ iConnectedEntry ][ e_fTeleX ], this.ConnectedEntries[ iConnectedEntry ][ e_fTeleY ], this.ConnectedEntries[ iConnectedEntry ][ e_fTeleZ ] + 0.5 );
	SetPlayerFacingAngle( playerid, this.ConnectedEntries[ iConnectedEntry ][ e_fTeleAngle ] );
	SetPlayerInterior( playerid, this.ConnectedEntries[ iConnectedEntry ][ e_iInterior ] );
	SetCameraBehindPlayer( playerid );
	
	if ( !this.ConnectedEntries[ iConnectedEntry ][ e_iInterior ] )
		SetPlayerVirtualWorld( playerid, WORLD_MAIN );
	else if ( !this.EntryLinks[ iEnEx ][ e_iInterior ] )
	{
		if ( this.aiInteriorGroup[ iEnEx ] == -1 )
			SetPlayerVirtualWorld( playerid, WORLD_OFFSET + iEnEx );
		else
			SetPlayerVirtualWorld( playerid, WORLD_OFFSET + this.aiInteriorGroup[ iEnEx ] );
	}
	
	Bit_On(this.baCooldown, playerid);
	
	SetTimerEx( #this.DisableCooldown, 1000, false, "i", playerid );
	
	if ( Bit_Get(this.baIsInteriorProtected, iConnectedEntry) )
		SetPlayerTeam( playerid, ENEX_TEAM_PROTECTED );
	
	OnPlayerEnterInterior( playerid, iEnEx, iConnectedEntry );
	
	return true;
}

stock this.SetPlayerEnexExit( playerid, iEnEx )
{
	if ( !( 0 <= iEnEx < sizeof( this.EntryLinks ) ) )
		return false;
	
	SetPlayerPos( playerid, this.EntryLinks[ iEnEx ][ e_fTeleX ], this.EntryLinks[ iEnEx ][ e_fTeleY ], this.EntryLinks[ iEnEx ][ e_fTeleZ ] + 0.5 );
	SetPlayerFacingAngle( playerid, this.EntryLinks[ iEnEx ][ e_fTeleAngle ] );
	SetPlayerInterior( playerid, this.EntryLinks[ iEnEx ][ e_iInterior ] );
	SetCameraBehindPlayer( playerid );
	
	if ( this.EntryLinks[ iEnEx ][ e_iInterior ] )
		SetPlayerVirtualWorld( playerid, WORLD_OFFSET + iEnEx );
	else
		SetPlayerVirtualWorld( playerid, WORLD_MAIN );
	
	Bit_On(this.baCooldown, playerid);
	
	SetTimerEx( #this.DisableCooldown, 1000, false, "i", playerid );
	
	if ( GetPlayerTeam( playerid ) == ENEX_TEAM_PROTECTED )
		SetPlayerTeam( playerid, NO_TEAM );
	
	//OnPlayerExitInterior( playerid, iEnEx, this::EntryLinks[ iEnEx ][ e_iConnectedEntry ] );
	
	return true;
}

forward this.DisableCooldown( playerid );
public  this.DisableCooldown( playerid )
{
	Bit_Off(this.baCooldown, playerid);
}

stock this.GetEnExVirtualWorld( iEnEx )
{
	if ( this.aiInteriorGroup[ iEnEx ] == -1 )
		return WORLD_OFFSET + iEnEx;
	else
		return WORLD_OFFSET + this.aiInteriorGroup[ iEnEx ];
}

stock this.GetEnExInterior( iEnEx )
{
	return this.ConnectedEntries[ this.EntryLinks[ iEnEx ][ e_iConnectedEntry ] ][ e_iInterior ];
}

stock this.GetPlayerEnEx( iPlayer )
{
	new
		iEnEx,
		iWorld = GetPlayerVirtualWorld( iPlayer )
	;
	
	if ( iWorld == WORLD_MAIN )
		iEnEx = 0;
	else
		iEnEx = iWorld - WORLD_OFFSET;
	
	if ( 0 <= iEnEx < sizeof( this.EntryLinks ) )
		return iEnEx;
	
	return -1;
}

stock this.GetEnExZone( iEnEx )
{
	if ( 0 <= iEnEx < sizeof( this.EntryLinks ) )
		return this.aiEntryZone[ iEnEx ];
	else
		return 0;
}

stock this.GetEnExInteriorInterior( iInterior )
{
	return this.ConnectedEntries[ iInterior ][ e_iInterior ];
}
