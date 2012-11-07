/*!
 * EnEx/callbacks/OnPlayerKeyPress.inc
 *
 * OnPlayerKeyPress(playerid, pressedkeys, keys)
 *
 > Priority: 0
 */

{
	if ( this.aiCurrentEnExArea[ playerid ] != -1 && ( keys & ( KEY_FIRE | KEY_ACTION | KEY_SECONDARY_ATTACK ) ) )
	{
		this.aiCurrentEnExArea[ playerid ] = -1;
		
		ClearAnimations( playerid, 1 );
	}
}