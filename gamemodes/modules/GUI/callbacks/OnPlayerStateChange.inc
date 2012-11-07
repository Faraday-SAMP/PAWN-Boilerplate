/*!
 * GUI/callbacks/OnPlayerStateChange.inc
 *
 * OnPlayerStateChange(playerid, newstate, oldstate)
 *
 > Priority: 0
 */

{
	switch ( newstate )
	{
		case PLAYER_STATE_NONE, PLAYER_STATE_SPECTATING:
		{
			this.HideInfoFeed( playerid );
			
			if ( this.txPlayerZoneTextDraw[ playerid ] != INVALID_TEXT_DRAW )
			{
				TextDrawHideForPlayer( playerid, this.txPlayerZoneTextDraw[ playerid ] );
				
				this.txPlayerZoneTextDraw[ playerid ] = INVALID_TEXT_DRAW;
			}
		
		}
		
		default:
		{
			switch ( oldstate )
			{
				case PLAYER_STATE_NONE, PLAYER_STATE_SPECTATING:
					this.ShowInfoFeed( playerid );
			}
		}
	}
}