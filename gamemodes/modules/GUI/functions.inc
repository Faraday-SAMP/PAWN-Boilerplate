/*!
 * GUI/functions.inc
 *
 > Priority: 0
 */

 stock this.InfoFeedInit( iPlayer )
{
	static
		Float:s_fAngleFract
	;
	
	new
		Float:fX,
		Float:fY,
		Float:fA
	;
	
	if ( !_:s_fAngleFract )
		s_fAngleFract = floatdiv( -70.0, GUI_INFO_FEED_LINES - 1 );
	
	for ( new i = 0; i < GUI_INFO_FEED_LINES; i++ )
	{
		memcpy( this.aszInfoFeedContents[ iPlayer ][ i ], "_", _, 2 * ( cellbits / 8 ), GUI_MAX_INFO_FEED );
		
		this.aiInfoFeedContentsPos[ iPlayer ] = 0;
		
		fA = 35.0 + ( s_fAngleFract * i );
		fX = 86.0;
		fY = 375.0;
		
		fX += floatcos( floatdiv( floatmul( fA, 3.1415926535 ), 180.0 ) ) * 54.0;
		fY += floatsin( floatdiv( floatmul( fA, 3.1415926535 ), 180.0 ) ) * 47.0;
		
		this.txInfoFeed[ iPlayer ][ i ] = TextDrawCreate( fX, fY, "_" );
		
		TextDrawFont           ( this.txInfoFeed[ iPlayer ][ i ], 1 );
		TextDrawLetterSize     ( this.txInfoFeed[ iPlayer ][ i ], 0.35, 1.4 );
		TextDrawSetShadow      ( this.txInfoFeed[ iPlayer ][ i ], 1 );
		TextDrawSetOutline     ( this.txInfoFeed[ iPlayer ][ i ], 0 );
		TextDrawBackgroundColor( this.txInfoFeed[ iPlayer ][ i ], 0x00000000 | ( 0xAA / ( GUI_INFO_FEED_LINES - i ) ) );
		TextDrawColor          ( this.txInfoFeed[ iPlayer ][ i ], 0xFFFFFF00 | ( 0xFF / ( GUI_INFO_FEED_LINES - i ) ) );
		
		this.aiInfoFeedDisplayTime[ iPlayer ][ i ] = 0;
	}
}

stock this.InfoFeedDestroy( iPlayer )
{
	for ( new i = 0; i < GUI_INFO_FEED_LINES; i++ )
	{
		if ( this.txInfoFeed[ iPlayer ][ i ] != INVALID_TEXT_DRAW )
		{
			TextDrawDestroy( this.txInfoFeed[ iPlayer ][ i ] );
			
			this.txInfoFeed[ iPlayer ][ i ] = INVALID_TEXT_DRAW;
		}
	}
}

stock this.ShowInfoFeed( iPlayer )
{
	for ( new i = 0; i < GUI_INFO_FEED_LINES; i++ )
		TextDrawShowForPlayer( iPlayer, this.txInfoFeed[ iPlayer ][ i ] );
}

stock this.HideInfoFeed( iPlayer )
{
	for ( new i = 0; i < GUI_INFO_FEED_LINES; i++ )
		TextDrawHideForPlayer( iPlayer, this.txInfoFeed[ iPlayer ][ i ] );
}

stock this.InfoFeedAdd( iPlayer, const szMessage[ ] )
{
	new
		iIndex = this.aiInfoFeedContentsPos[ iPlayer ]
	;
	
	NullString( this.aszInfoFeedContents[ iPlayer ][ iIndex ] );
	
	strcat( this.aszInfoFeedContents[ iPlayer ][ iIndex ], szMessage, GUI_MAX_INFO_FEED - 1 );
	
	this.aiInfoFeedDisplayTime[ iPlayer ][ iIndex ] = GetTickCount( );
	
	this.aiInfoFeedContentsPos[ iPlayer ] = ( this.aiInfoFeedContentsPos[ iPlayer ] + 1 ) % GUI_INFO_FEED_LINES;
	
	for ( new i = 0; i < GUI_INFO_FEED_LINES; i++ )
	{
		iIndex = ( i + this.aiInfoFeedContentsPos[ iPlayer ] ) % GUI_INFO_FEED_LINES;
		
		TextDrawSetString( this.txInfoFeed[ iPlayer ][ i ], this.aszInfoFeedContents[ iPlayer ][ iIndex ] );
		
		TextDrawShowForPlayer( iPlayer, this.txInfoFeed[ iPlayer ][ i ] );
	}
	
	SetTimerEx( #this.CheckFeedExpiration, GUI_FEED_DISPLAY_TIME, false, "i", iPlayer );
}

stock this.InfoFeedAddf( playerid, const szFormat[ ], { Float, _ }:... )
{
	new
		iArgCount = ( numargs( ) - 2 ) * 4
	;
	
	if ( !iArgCount )
		this.InfoFeedAdd( playerid, szFormat );
	else
	{
		new
			iArgStart,
			iArgEnd,
			szString[ GUI_MAX_INFO_FEED ]
		;

		#emit CONST.alt		szFormat
		#emit LCTRL			5
		#emit ADD
		#emit STOR.S.pri	iArgStart
		#emit LOAD.S.alt	iArgCount
		#emit ADD
		#emit STOR.S.pri	iArgEnd

		do
		{
			#emit LOAD.I
			#emit PUSH.pri

			iArgEnd -= 4;

			#emit LOAD.S.pri	iArgEnd
		}
		while ( iArgEnd > iArgStart );
		
		#if ( GUI_MAX_INFO_FEED != 128 )
			#error GUI_MAX_INFO_FEED != 128
		#endif

		#emit PUSH.S	szFormat
		#emit PUSH.C	128
		#emit PUSH.ADR	szString

		iArgCount += 12;

		#emit PUSH.S	iArgCount
		#emit SYSREQ.C	format

		iArgCount += 4;

		#emit LCTRL			4
		#emit LOAD.S.alt	iArgCount
		#emit ADD
		#emit SCTRL			4
		
		this.InfoFeedAdd( playerid, szString );
	}
}

forward this.CheckFeedExpiration( iPlayer );
public  this.CheckFeedExpiration( iPlayer )
{
	if ( !IsPlayerConnected( iPlayer ) )
		return;
	
	new
		iTick = GetTickCount( )
	;
	
	for ( new i = 0, iIndex; i < GUI_INFO_FEED_LINES; i++ )
	{
		iIndex = ( i + this.aiInfoFeedContentsPos[ iPlayer ] ) % GUI_INFO_FEED_LINES;
		
		if ( this.aiInfoFeedDisplayTime[ iPlayer ][ iIndex ] && iTick - this.aiInfoFeedDisplayTime[ iPlayer ][ iIndex ] >= GUI_FEED_DISPLAY_TIME )
		{
			TextDrawHideForPlayer( iPlayer, this.txInfoFeed[ iPlayer ][ i ] );
			
			NullString( this.aszInfoFeedContents[ iPlayer ][ iIndex ] );
			
			this.aiInfoFeedDisplayTime[ iPlayer ][ iIndex ] = 0;
		}
	}
}

stock this.UpdatePlayerMoneyTextDraw( playerid )
{
	strdel(this.Buffer, 0, sizeof( this.Buffer ) );
	
	format( this.Buffer, sizeof( this.Buffer ), "$%08d", Player.Info[ playerid ][ Money ] < 0 ? -Player.Info[ playerid ][ Money ] : Player.Info[ playerid ][ Money ] );
	
	TextDrawSetString( this.txMoney[ playerid ], this.Buffer );
	
	TextDrawColor( this.txMoney[ playerid ], Player.Info[ playerid ][ Money ] < 0 ? 0xB4191DFF : 0x2C6826FF );
	
	TextDrawShowForPlayer( playerid, this.txMoney[ playerid ] );
	TextDrawShowForPlayer( playerid, this.txMoneyBackground );
}