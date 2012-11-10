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
	
	this.txBankBalance[ playerid ] = TextDrawCreate(496.000000, 105.000000, "Bank: ~y~~h~$ 5,000,000");
	
	TextDrawBackgroundColor(this.txBankBalance[ playerid ], 255);
	TextDrawFont		   (this.txBankBalance[ playerid ], 1);
	TextDrawLetterSize	   (this.txBankBalance[ playerid ], 0.370000, 1.500000);
	TextDrawColor		   (this.txBankBalance[ playerid ], -1);
	TextDrawSetOutline	   (this.txBankBalance[ playerid ], 0);
	TextDrawSetProportional(this.txBankBalance[ playerid ], 1);
	TextDrawSetShadow	   (this.txBankBalance[ playerid ], 1);
}