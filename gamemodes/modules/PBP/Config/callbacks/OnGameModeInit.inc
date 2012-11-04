/*!
 * PBP/Config/callbacks/OnGameModeInit.inc
 *
 * OnGameModeInit()
 *
 > Priority: 15
 */

{
	// Set the gamemode's name to MODE_NAME and version information (from gamemodes/header.inc).
	SetGameModeText(MODE_NAME " v" #SCRIPT_VERSION_MAJOR "." #SCRIPT_VERSION_MINOR "." #SCRIPT_VERSION_BUILD);

	this.CB_OnConfigValueChange = GetPublicAddressFromName("OnConfigValueChange");
	
	for (new buf[32], idx; (idx = AMX_GetPublicName(idx, buf, !"@Pc_")); ) {
		if (strfind(buf, !".") != -1)
			continue;
		
		CallLocalFunction(buf, "");
	}
	
	this.LoadEntries(true);
}