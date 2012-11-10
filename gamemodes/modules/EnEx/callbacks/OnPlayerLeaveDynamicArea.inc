/*!
 * EnEx/callbacks/OnPlayerLeaveDynamicArea.inc
 *
 * OnPlayerLeaveDynamicArea(playerid, areaid)
 *
 > Priority: 0
 */

{
	if ( this.aiAreaEntry[ areaid ] != -1 || this.aiAreaConnectedEntry[ areaid ] != -1 )
	{
		if ( this.aiCurrentEnExArea[ playerid ] != -1 )
		{		
			this.aiCurrentEnExArea[ playerid ] = -1;
		}
	}
}