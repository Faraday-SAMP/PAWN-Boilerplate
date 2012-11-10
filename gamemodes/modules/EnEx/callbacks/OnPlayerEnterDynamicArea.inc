/*!
 * EnEx/callbacks/OnPlayerEnterDynamicArea.inc
 *
 * OnPlayerEnterDynamicArea(playerid, areaid)
 *
 > Priority: 0
 */

{

	if( ( this.aiAreaEntry[ areaid ] != -1 || this.aiAreaConnectedEntry[ areaid ] != -1 ) && GetPlayerState( playerid ) == PLAYER_STATE_ONFOOT )
	{
		if( Bit_Get(this.baCooldown, playerid) )
			Bit_Off(this.baCooldown, playerid);
		else if( Bit_Get(this.baPlayerEntered, playerid) && !Bit_Get(this.baCooldown, playerid ) )
			this.SetPlayerEnexExit( playerid, this.aiAreaConnectedEntry[ areaid ] );
		else
			this.SetPlayerEnexEntry( playerid, this.aiAreaEntry[ areaid ] );
	}

}