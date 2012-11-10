/*!
 * Bank/callbacks/OnPlayerEnterDynamicCP.inc
 *
 * OnPlayerEnterDynamicCP(playerid, checkpointid)
 *
 > Priority: 0
 */

{
	if( Bit_Get(this.baUsedCheckpoints, checkpointid) )
	{
		this.ShowPlayerMainMenu( playerid );
		
		Player.SetFreeze( playerid, 1 );
		
	}
}