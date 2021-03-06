/*!
 * PBP/Admin/commands.inc
 *
 > Priority: 0
 */

CommandDescription<rpfv> = @"Remove a player from his vehicle.";

YCMD(GROUP_MANAGEMENT, GROUP_ADMIN, GROUP_RCON, GROUP_MOD):rpfv( playerid, params[], help)
{
	if( help )
	{	
		SendClientMessage(playerid, COLOR_COMMAND_HELP, @"* Remove a player from his vehicle.");

usage:
		SendClientMessage(playerid, COLOR_COMMAND_USAGE, @"* Usage: /rpfv [player]");
	}
	else
	{
		new 
			otherid
		;
		
		if( !sscanf( params, !"k<player_name>", otherid ) )
		{

			if( !IsPlayerInAnyVehicle( otherid ) )
			{
				SendClientMessage( playerid, COLOR_COMMAND_ERROR, @"* The player is not in any vehicle!" );
				goto usage;
			}
			else if( this.PlayerLevel[ playerid ] <= this.LEVEL_MOD )
				SendClientMessage( playerid, COLOR_COMMAND_ERROR, @"* You cannot remove a player that has the same or a higher level than you from his vehicle." );
	
			else
				RemovePlayerFromVehicle( otherid );
		}
	}
	return 1;	
}
 
CommandDescription<setlevel> = @"Set a player's admin level.";

YCMD(GROUP_MANAGEMENT, GROUP_RCON):setlevel(playerid, params[], help) {
	if (help) {
		SendClientMessage(playerid, COLOR_COMMAND_HELP, @"* Set a player's admin level.");

usage:
        SendClientMessage(playerid, COLOR_COMMAND_USAGE, @"* Usage: /setlevel [player] [level]");
	} else {
		new
			           otherid,
			AdminLevel:level = this.INVALID_LEVEL,
			           level_name[32]
		;
		
		if (!sscanf(params, !"k<player_name>i", otherid, _:level)) {
			if (!(AdminLevel:0 <= level < this.NUM_LEVELS))
				level = this.INVALID_LEVEL;
		} else if (!sscanf(params, !"k<player_name>s[32]", otherid, level_name)) {
			new AdminLevel:found_level = this.INVALID_LEVEL;
			
			for (level = AdminLevel:0; level < this.NUM_LEVELS; level++) {
				if (strfind(this.LevelNames[level], level_name, true) != -1) {
					if (found_level != this.INVALID_LEVEL) {
						// Multiple matches
						found_level = this.INVALID_LEVEL;
						
						break;
					} else {
						found_level = level;
					}
				}
			}
			
			level = found_level;
		} else
			goto usage;
		
		if (otherid == INVALID_PLAYER_ID) {
			SendClientMessage(playerid, COLOR_COMMAND_ERROR, @"* Invalid player.");
		} else if (!IsPlayerRconAdmin(playerid) && GetPlayerAdminLevel(otherid) >= GetPlayerAdminLevel(playerid)) {
			SendClientMessage(playerid, COLOR_COMMAND_ERROR, @"* You may only change the level of players with a level lower than yours.");
		} else if (level == this.INVALID_LEVEL) {
			SendClientMessage(playerid, COLOR_COMMAND_ERROR, @"* Invalid level.");
		} else {
			if (GetPlayerAdminLevel(otherid) == level)
				SendClientMessage(playerid, COLOR_COMMAND_ERROR, @"* %P%C already has that level.", otherid, COLOR_COMMAND_ERROR);
			else {
				SetPlayerAdminLevel(otherid, level, playerid);
			
				SendClientMessage(playerid, COLOR_COMMAND_INFO, @"* You set the level of %P%C to %s (%d).", otherid, COLOR_COMMAND_INFO, this.LevelNames[level], _:level);
			}
		}
	}
	
	return 1;
}