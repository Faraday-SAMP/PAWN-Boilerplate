/*!
 * EnEx/callbacks/OnPlayerUpdate.inc
 *
 * OnPlayerUpdate(playerid)
 *
 > Priority: 0
 */

{
	static
		this.State,
		this.Animation,
		this.Tick,
		this.Keys,
		this.KeysUpDown,
		this.KeysLeftRight,
		this.PressedKeys,
		this.ReleasedKeys
	;
	
	this.State 		= GetPlayerState( playerid );
	this.Animation 	= GetPlayerAnimationIndex( playerid );
	this.Tick		= GetTickCount( );
	
	GetPlayerKeys( playerid, this.Keys, this.KeysUpDown, this.KeysLeftRight );
	
	if ( this.Animation != Player.PreviousAnimation[ playerid ] )
	{
		OnPlayerAnimationChange( playerid, this.Animation, Player.PreviousAnimation[ playerid ] );
		
		Player.PreviousAnimation[ playerid ] = this.Animation;
	}

	if ( this.Keys != Player.PreviousKeys[ playerid ] )
	{
		this.PressedKeys = ( this.Keys ^ Player.PreviousKeys[ playerid ] );
		this.ReleasedKeys = this.PressedKeys & Player.PreviousKeys[ playerid ];
		this.PressedKeys &= this.Keys;
		
		if ( this.PressedKeys )
			OnPlayerKeyPress( playerid, this.PressedKeys, this.Keys );
		
		if ( this.ReleasedKeys )
			//OnPlayerKeyRelease( playerid, this.ReleasedKeys, this.Keys );
		
		if ( ( this.PressedKeys & ( KEY_UP | KEY_DOWN | KEY_LEFT | KEY_RIGHT ) ) ||
			 ( Player.PreviousKeys[ playerid ] & ( KEY_UP | KEY_DOWN | KEY_LEFT | KEY_RIGHT ) ) )
			//OnPlayerKeyStateChange( playerid, this.Keys, Player.PreviousKeys[ playerid ] );
		
		Player.PreviousKeys[ playerid ] = this.Keys;
	}
	
	if ( this.aiCurrentEnExArea[ playerid ] != -1 )
	{
		if ( this.State != PLAYER_STATE_ONFOOT )
			this.aiCurrentEnExArea[ playerid ] = -1;
		else if ( this.Tick - this.aiEnterTime[ playerid ] > ENEX_ENTER_TIME_LIMIT )
		{
			ClearAnimations( playerid, 1 );
			
			this.aiCurrentEnExArea[ playerid ] = -1;
		}
		else if ( !this.aiEnterStep{ playerid } )
		{
			switch ( this.Animation )
			{
				case PED_WALK_ARMED .. PED_WALK_WUZI, PED_RUN_1ARMED .. PED_RUN_WUZI, PED_SPRINT_CIVI .. PED_SPRINT_WUZI, PED_IDLE_ARMED .. PED_IDLE_TIRED, PED_JUMP_LAND:
					{ }
				default:
					goto skip;
			}
			
			if ( this.Keys & ( KEY_FIRE | KEY_ACTION ) )
				goto skip;
			
			if ( !IsPlayerInDynamicArea( playerid, this.aiCurrentEnExArea[ playerid ] ) )
			{
				this.aiCurrentEnExArea[ playerid ] = -1;
				SendClientMessage(playerid,-1,"SUM TING WONG" );
				ClearAnimations( playerid, 1 );
				
				goto skip;
			}
			
			this.aiEnterStep{ playerid } = 1;

			
			#if defined s_fRot
				SetPlayerFacingAngle( playerid, s_fRot );
			#else
				new
					Float:fRot
				;
				
				GetPlayerFacingAngle( playerid, fRot );
				SetPlayerFacingAngle( playerid, fRot );
			#endif
			
			ApplyAnimation( playerid, "PED", "XPRESSscratch", 0.0, 1, 0, 0, 0, 10000, 1 );
skip:
		}
		
		if ( this.aiCurrentEnExArea[ playerid ] == -1 )
			ClearAnimations( playerid, 1 );
	}
}
