/*!
 * Bank/functions.inc
 *
 > Priority: 0
 */

stock this.GivePlayerMoney( playerid, money )
{
	Player.Info[ playerid ][ Money ] += money;

	GUI.UpdatePlayerMoneyTextDraw( playerid );
}