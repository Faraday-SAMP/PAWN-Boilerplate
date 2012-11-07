/*!
 * GUI/callbacks/OnPlayerEnterDynamicArea.inc
 *
 * OnPlayerEnterDynamicArea(playerid, areaid)
 *
 > Priority: 0
 */

{
	if ( this.AreaZone{ areaid } != 0xFF )
	{
		OnPlayerZoneChange( playerid, this.AreaZone{ areaid }, this.CurrentPlayerZone[ playerid ] );
		
		this.CurrentPlayerZone[ playerid ] = this.AreaZone{ areaid };
	}
}