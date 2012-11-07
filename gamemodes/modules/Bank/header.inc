/*!
 * Bank/header.inc
 *
 > Priority: 6
 */
//sdfsdfs
#define PLAYER_AC_MONEY (-9000)
#define BANK_MARKER_RADIUS   (1.0)
#define BANK_PERSONAL_LIMIT	 (1000000)

enum e_BANK_LOCATION
{
	      e_iInterior,
	Float:e_fX,
	Float:e_fY,
	Float:e_fZ,
	Float:e_fRot
};

enum
{
	this.DIALOG_WITHDRAW_DEPOSIT
};

new const
	this.BankLocations[ ][ e_BANK_LOCATION ] = 
	{
		{ EnEx.INTERIOR_X7_11B, -27.7974, -89.9461, 1003.5469, 180.000 }, // 169
		{ EnEx.INTERIOR_X7_11S, -23.0694, -55.6536, 1003.5469, 180.000 }, //  33
		{ EnEx.INTERIOR_X711S2, -30.9750, -29.0226, 1003.5573, 180.000 }  //  86
	}
;

new
	BitArray:this.baUsedCheckpoints< CHECKPOINT_UPPER_LIMIT >
;