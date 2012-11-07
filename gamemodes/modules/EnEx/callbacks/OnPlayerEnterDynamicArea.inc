/*!
 * EnEx/callbacks/OnPlayerEnterDynamicArea.inc
 *
 * OnPlayerEnterDynamicArea(playerid, areaid)
 *
 > Priority: 0
 */

{
	if ( ( this.aiAreaEntry[ areaid ] != -1 || this.aiAreaConnectedEntry[ areaid ] != -1 ) && GetPlayerState( playerid ) == PLAYER_STATE_ONFOOT )
	{
		if ( Bit_Get(this.baCooldown, playerid) )
			Bit_Off(this.baCooldown, playerid);
		else
		{
			this.aiEnterStep{ playerid } = 0;
			this.aiEnterTime[ playerid ] = GetTickCount( );
			this.aiCurrentEnExArea[ playerid ] = areaid;
		}
	}
}