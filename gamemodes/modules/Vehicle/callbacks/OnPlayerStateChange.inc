/*!
 * Vehicle/callbacks/OnPlayerStateChange.inc
 *
 * OnPlayerStateChange(playerid, newstate, oldstate)
 *
 > Priority: 0
 */

{
	if( newstate == PLAYER_STATE_DRIVER )
	{
		new 
			vehicle_id = GetPlayerVehicleID( playerid )
		;
		
		format( this.String, sizeof( this.String ), "~g~%s", this.VehicleNames[ GetVehicleModel( vehicle_id ) - 400 ] );
		GameTextForPlayer( playerid, this.String, 2500, 1 );
	}

}