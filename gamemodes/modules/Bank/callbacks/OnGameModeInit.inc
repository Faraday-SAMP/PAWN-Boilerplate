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
		
		CreateDynamicMapIcon( this.BankLocations[ i ][ e_fX ], this.BankLocations[ i ][ e_fY ], this.BankLocations[ i ][ e_fZ ], BANK_MAP_ICON, -1);
		printf( "BANK: %d | fX: %.2f |fY: %.2f |fZ: %.2f |ICON: %d", i, this.BankLocations[i][e_fX], this.BankLocations[i][e_fY], this.BankLocations[i][e_fZ], BANK_MAP_ICON);
		
		Bit_On(this.baUsedCheckpoints, iCheckpoint);
	}

}