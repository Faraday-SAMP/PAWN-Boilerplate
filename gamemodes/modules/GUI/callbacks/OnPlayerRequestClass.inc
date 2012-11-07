/*!
 * GUI/callbacks/OnPlayerRequestClass.inc
 *
 * OnPlayerRequestClass(playerid, classid)
 *
 > Priority: 0
 */

{
	this.HideInfoFeed( playerid );
	
	if ( this.txPlayerZoneTextDraw[ playerid ] != INVALID_TEXT_DRAW )
	{
		TextDrawHideForPlayer( playerid, this.txPlayerZoneTextDraw[ playerid ] );
		
		this.txPlayerZoneTextDraw[ playerid ] = INVALID_TEXT_DRAW;
	}

}