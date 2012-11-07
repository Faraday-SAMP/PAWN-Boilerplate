/*!
 * GUI/callbacks/OnGameModeInit.inc
 *
 * OnGameModeInit()
 *
 > Priority: 0
 */

{
	//initializing zones
	for ( new i = sizeof( this.Zones ) - 1, iArea; i >= 0; i-- )
	{
		iArea = CreateDynamicRectangle( this.Zones[ i ][ e_fMinX ], this.Zones[ i ][ e_fMinY ], this.Zones[ i ][ e_fMaxX ], this.Zones[ i ][ e_fMaxY ], WORLD_MAIN, 0 );
			
		this.AreaZone{ iArea } = this.Zones[ i ][ e_iZone ];
	}
	
	for ( new i = 0, j; i < sizeof( this.txInfoFeed ); i++ )
	{
		for ( j = 0; j < sizeof( this.txInfoFeed[ ] ); j++ )
			this.txInfoFeed[ i ][ j ] = INVALID_TEXT_DRAW;
	}
	
	for ( new i = 0; i < sizeof( this.txZoneNames ); i++ )
	{
		this.txZoneNames[ i ] = TextDrawCreate( 87.0, 426.5, this.ZoneNames[ i ] ); 
		
		TextDrawAlignment      ( this.txZoneNames[ i ], 2 );
		TextDrawBackgroundColor( this.txZoneNames[ i ], 0x20202035 );
		TextDrawFont           ( this.txZoneNames[ i ], 0 );
		TextDrawLetterSize     ( this.txZoneNames[ i ], 0.5, 1.9 );
		TextDrawColor          ( this.txZoneNames[ i ], 0xFFFFFFFF );
		TextDrawSetOutline     ( this.txZoneNames[ i ], 1 );
		TextDrawSetShadow      ( this.txZoneNames[ i ], 0 );
		TextDrawSetProportional( this.txZoneNames[ i ], true );
	}
	
	this.txMoneyBackground = TextDrawCreate( 608.0, 74.5, "00000000000" );
	
	TextDrawAlignment      ( this.txMoneyBackground, 3 );
	TextDrawBackgroundColor( this.txMoneyBackground, 0x111111DD );
	TextDrawFont           ( this.txMoneyBackground, 3 );
	TextDrawLetterSize     ( this.txMoneyBackground, 0.4535, 2.8 );
	TextDrawColor          ( this.txMoneyBackground, 0 );
	TextDrawSetOutline     ( this.txMoneyBackground, 2 );
	TextDrawSetProportional( this.txMoneyBackground, 1 );
}