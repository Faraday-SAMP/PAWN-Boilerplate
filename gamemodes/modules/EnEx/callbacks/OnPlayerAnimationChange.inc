/*!
 * EnEx/callbacks/OnPlayerAnimationChange.inc
 *
 * OnPlayerAnimationChange(playerid, animation, previousanimation)
 *
 > Priority: 0
 */

{
	if ( this.aiCurrentEnExArea[ playerid ] != -1 && this.aiEnterStep{ playerid } )
	{
		if ( GetPlayerState( playerid ) != PLAYER_STATE_ONFOOT )
			this.aiCurrentEnExArea[ playerid ] = -1;
		else if ( GetTickCount( ) - this.aiEnterTime[ playerid ] > ENEX_ENTER_TIME_LIMIT )
		{
			ClearAnimations( playerid, 1 );
			
			this.aiCurrentEnExArea[ playerid ] = -1;
		}
		else
		{
			ClearAnimations( playerid, 1 );
			
			if ( animation == PED_XPRESSSCRATCH )
				ApplyAnimation( playerid, "CARRY", "crry_prtial", 0.0, 1, 0, 0, 0, cellmax - 1, 1 );
			else
				ApplyAnimation( playerid, "PED", "XPRESSscratch", 0.0, 1, 0, 0, 0, cellmax - 1, 1 );
			
			if ( ++this.aiEnterStep{ playerid } >= ENEX_ENTER_TICKS )
			{
				ClearAnimations( playerid, 1 );
				
				if ( this.aiAreaEntry[ this.aiCurrentEnExArea[ playerid ] ] != -1 )
					this.SetPlayerEnexEntry( playerid, this.aiAreaEntry[ this.aiCurrentEnExArea[ playerid ] ] );
				
				if ( this.aiAreaConnectedEntry[ this.aiCurrentEnExArea[ playerid ] ] != -1 )
					this.SetPlayerEnexExit( playerid, this.aiAreaConnectedEntry[ this.aiCurrentEnExArea[ playerid ] ] );
				
				this.aiCurrentEnExArea[ playerid ] = -1;
			}
		}
	}
}