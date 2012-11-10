/*!
 * Bank/callbacks/OnGameModeInit.inc
 *
 * OnGameModeInit()
 *
 > Priority: 0
 */

{

	for ( new iCheckpoint, iInterior, i = 0; i < sizeof( this.BankLocations ); i++ )
	{
		if ( this.BankLocations[ i ][ e_iInterior ] == -1 )
			iInterior = 0;
		else
			iInterior = EnEx.GetEnExInteriorInterior( this.BankLocations[ i ][ e_iInterior ] );
		
		iCheckpoint = CreateDynamicCP( this.BankLocations[ i ][ e_fX ], this.BankLocations[ i ][ e_fY ], this.BankLocations[ i ][ e_fZ ], BANK_MARKER_RADIUS, _, iInterior );
		
		//CreateDynamicMapIcon( this.BankLocations[ i ][ e_fX ], this.BankLocations[ i ][ e_fY ], this.BankLocations[ i ][ e_fZ ], BANK_MAP_ICON, -1);
		
		Bit_On(this.baUsedCheckpoints, iCheckpoint);
	}

	for( new i = 0; i < sizeof( EnEx.EntryLinks ); i++ )
	{
		if( EnEx.INTERIOR_X7_11S <= EnEx.EntryLinks[ i ][e_iConnectedEntry] <= EnEx.INTERIOR_X711S3 )	
			CreateDynamicMapIcon( EnEx.EntryLinks[ i ][ e_fPickupX ], EnEx.EntryLinks[ i ][ e_fPickupY ], EnEx.EntryLinks[ i ][ e_fPickupZ ], BANK_MAP_ICON, -1 );
	}
	
}