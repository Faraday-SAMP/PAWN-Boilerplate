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

stock this.TakePlayerMoney( playerid, money )
{
	Player.Info[ playerid ][ Money ] -= money;
	
	GUI.UpdatePlayerMoneyTextDraw( playerid );
}


stock this.ShowPlayerMainMenu( playerid )
{
	if( this.PlayerBalance[playerid] < 0 )
		format( this.Buffer, sizeof( this.Buffer), "~w~Bank: ~r~~h~$ %d", -this.PlayerBalance[playerid] );
	else
		format( this.Buffer, sizeof( this.Buffer ), "~w~Bank: ~y~~h~$ %d", this.PlayerBalance[playerid] );

	TextDrawSetString( GUI.txBankBalance[playerid], this.Buffer );
	
	TextDrawShowForPlayer( playerid, GUI.txBankBalance[playerid] );

	ShowPlayerDialog( playerid, this.DIALOG_MAIN, DIALOG_STYLE_INPUT, @"Withdraw or deposit?", @"Do you want to withdraw or deposit money? \nEnter 'w' or 'd' with the amount you want to withdraw or deposit.\n\n\t*Example: w 5000", @"Submit", @"Cancel" );
}


stock this.SavePlayerMoney( playerid )
{
	new
		UID:user = Users.PlayerUID[playerid]
	;
	
	
	if( !Users.ResolveUID(user) )
		return false;
	
	static DBStatement:stmt =: db_prepare( Users.DB, !"UPDATE `users` SET `bankmoney` = ? WHERE `uid` = ?" );
	
	stmt_bind_value( stmt, 0, DB::TYPE_INT, this.PlayerBalance[playerid]);
	stmt_bind_value( stmt, 1, DB::TYPE_INT, _:user);
	
	return !!stmt_execute(stmt);
}