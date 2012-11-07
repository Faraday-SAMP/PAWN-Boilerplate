/*!
 * GUI/callbacks/OnPlayerZoneChange.inc
 *
 * OnPlayerZoneChange(playerid, zoneid, previouszoneid)
 *
 > Priority: 0
 */

{
	if ( this.txPlayerZoneTextDraw[ playerid ] != INVALID_TEXT_DRAW )
		TextDrawHideForPlayer( playerid, this.txPlayerZoneTextDraw[ playerid ] );
	
	if ( zoneid != ZONE_UNKNOWN )
	{
		this.txPlayerZoneTextDraw[ playerid ] = this.txZoneNames[ zoneid ];
		
		TextDrawShowForPlayer( playerid, this.txPlayerZoneTextDraw[ playerid ] );
	}
	else
		this.txPlayerZoneTextDraw[ playerid ] = INVALID_TEXT_DRAW;
}