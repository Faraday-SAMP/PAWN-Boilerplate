/*!
 * EnEx/callbacks/OnPlayerConnect.inc
 *
 * OnPlayerConnect(playerid)
 *
 > Priority: 0
 */

{
	this.aiCurrentEnExArea[ playerid ] = -1;
	
	Bit_Off(this.baCooldown, playerid);
}