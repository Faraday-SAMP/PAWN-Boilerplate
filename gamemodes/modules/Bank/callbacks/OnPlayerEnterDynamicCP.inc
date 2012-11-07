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
		ShowPlayerDialog( playerid, this.DIALOG_WITHDRAW_DEPOSIT, DIALOG_STYLE_INPUT, @"Withdraw or deposit?", @"Do you want to withdraw or deposit money? \nEnter 'w' or 'd' with the amount you want to withdraw or deposit.\n\n\t*Example: w 5000", @"Submit", @"Cancel" );
		
		TogglePlayerControllable( playerid, false );
		
	}
}