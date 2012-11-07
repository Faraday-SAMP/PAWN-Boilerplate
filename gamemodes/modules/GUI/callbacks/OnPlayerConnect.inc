/*!
 * GUI/callbacks/OnPlayerConnect.inc
 *
 * OnPlayerConnect(playerid)
 *
 > Priority: 0
 */

{
	this.InfoFeedInit( playerid );
	
	this.txPlayerZoneTextDraw[ playerid ] = INVALID_TEXT_DRAW;
	
	if ( GUI.txMoney[ playerid ] != INVALID_TEXT_DRAW )
		TextDrawDestroy( this.txMoney[ playerid ] );
	
	this.txMoney[ playerid ] = TextDrawCreate( 608.0, 76.5, "$00000000" );
	
	TextDrawAlignment      ( this.txMoney[ playerid ], 3 );
	TextDrawBackgroundColor( this.txMoney[ playerid ], 0 );
	TextDrawFont           ( this.txMoney[ playerid ], 3 );
	TextDrawLetterSize     ( this.txMoney[ playerid ], 0.55, 2.45 );
	TextDrawColor          ( this.txMoney[ playerid ], 0x2C6826FF );
	TextDrawSetOutline     ( this.txMoney[ playerid ], 2 );
	TextDrawSetProportional( this.txMoney[ playerid ], 0 );
}