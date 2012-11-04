/*!
 * PBP/Commands/commands.inc
 *
 > Priority: 0
 */

/*CommandDescription<pm> = @"Send a player a personal message.";

YCMD:pm( playerid, params[], help )
{
	if( help )
	{
		SendClientMessage( playerid, COLOR_COMMAND_HELP, @"Send a player a personal message." );
usage:
		SendClientMessage( playerid, COLOR_COMMAND_HELP, @"Usage: /pm [player] [message]" );
	}
	else
	{
		new 
			otherid,
			szMessage[128]
		;
		
		if( !sscanf( params, !"k<player_name>s[128]", otherid, szMessage ) )
		{
			//if( otherid == playerid)
			//	SendClientMessage( playerid, COLOR_COMMAND_ERROR, @"You cannot pm yourself!");
			if isnull( szMessage ) 
			goto usage;
			else
			{
				GUI.InfoFeedAddf( otherid, "~y~~h~(PM) from %P: ~w~~h~%s", otherid, szMessage );
			}
		}
		else 
			goto usage;
	}
	
	return 1;
} */
 
CommandDescription<commands> = @"See a list of available commands.";

YCMD:commands(playerid, params[], help) {
	if (help) {
		SendClientMessage(playerid, COLOR_COMMAND_HELP, "* %s", @"See a list of available commands.");
	} else {
		this.ShowCommandsDialog(playerid);
	}
	
	return 1;
}

CommandDescription<help> = @"View information about a certain command.";

YCMD:help(playerid, params[], help) {
	if (help) {
		SendClientMessage(playerid, COLOR_COMMAND_HELP, @"* View information about a certain command.");

usage:
        SendClientMessage(playerid, COLOR_COMMAND_USAGE, @"* Usage: /help [command]");
	} else {
		if (isnull(params))
			goto usage;
		
		new cmd, idx = 0;
		
		if (params[0] == '/')
			idx = 1;
		
		cmd = Command_GetID(params[idx]);
		
		if (cmd == COMMAND_NOT_FOUND || !Command_ReProcess(playerid, params[idx], true)) {
			SendClientMessage(playerid, COLOR_COMMAND_ERROR, @"* Invalid command.");
			
			return 1;
		}
	}
	
	return 1;
}

CommandDescription<rules> = @"Display the server rules.";

YCMD:rules( playerid, params[], help )
{
	if( help )
		SendClientMessage( playerid, COLOR_COMMAND_HELP, @"Display the server rules." );
	else
	{
		SendClientMessage( playerid, COLOR_GENERIC_INFO, @"Visit http://littlewhiteys.co.uk for an updated and full list of server rules and regulations." );
		SendClientMessage( playerid, COLOR_GENERIC_INFO, @"Don't (spawn)camp. Do not abuse bugs and/or glitches." );
		SendClientMessage( playerid, COLOR_GENERIC_INFO, @"Don't quit to avoid death. Respect other players." );
	}
	return 1;
}