/*!
 * EnEx/callbacks/OnPlayerEnterInterior.inc
 *
 * OnPlayerEnterInterior(playerid, enex_id, connected_entry)
 *
 > Priority: 0
 */

{
	new
		enex_zone = this.GetEnExZone( enex_id )
	;
	GUI.InfoFeedAddf( playerid, "~w~* Welcome to ~y~%s ~w~at ~y~%s!", this.InteriorNames[ connected_entry ], GUI.ZoneNames[ enex_zone ] );
	
	
}