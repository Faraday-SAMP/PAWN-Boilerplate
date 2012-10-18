/*!
 * PBP/ClassSelection/callbacks/OnGameModeInit.inc
 *
 * OnGameModeInit()
 *
 > Priority: 0
 */

{
	AddPlayerClass(0, 0.0, 0.0, 3.0, 0.0, 0, 0, 0, 0, 0, 0);
	AddPlayerClass(0, 0.0, 0.0, 3.0, 0.0, 0, 0, 0, 0, 0, 0);
	
	if (AddPlayerClass(0, 0.0, 0.0, 3.0, 0.0, 0, 0, 0, 0, 0, 0) != 2)
		printf("(ClassSelection) ERROR: Too many classes existing. Did you use AddPlayerClass? Use CreateClass instead.");

	new
		this.FireFighter,
		this.PublicService,
		this.Ammunation,
		this.Construction
	;
		
	for( new i = 0; i < sizeof( this.FireFighterSpawns ); i++ )
	{	
		this.FireFighter = CreateSpawnLocation(
			.interior = this.FireFighterSpawns[ i ][ e_Interior ],
			.world    = this.FireFighterSpawns[ i ][ e_World ],
			.x		  = this.FireFighterSpawns[ i ][ e_fX ],
			.y		  = this.FireFighterSpawns[ i ][ e_fY ],
			.z		  = this.FireFighterSpawns[ i ][ e_fZ ],
			.rot	  = this.FireFighterSpawns[ i ][ e_fRot ]
		);
	}
	
	this.PublicService = CreateSpawnLocation(
		.interior = 0,
		.x        = 203.7050,
		.y        = -205.3500,
		.z        = 1.5781,
		.rot      = 180.0
	);
	
	this.Ammunation = CreateSpawnLocation(
		.interior = 0,
		.x        = 240.0390,
		.y        = -178.2970,
		.z        = 1.5781,
		.rot      = 90.0
	);
	
	this.Construction = CreateSpawnLocation(
		.interior = 0,
		.x        = 164.0287,
		.y        = -239.0828,
		.z        = 13.4838,
		.rot      = 314.0858
	);
	
	foreach (new skin : Numbers({155, 167}))
		CreateClass(skin, this.PublicService);
	
	// Ammu-nation guy skin
	CreateClass(179, this.Ammunation);
	
	// Construction workers
	foreach (new skin : Numbers({27, 260}))
		CreateClass(skin, this.Construction);
	
	foreach (new skin : Numbers({277, 278, 279, 277, 278, 279, 277 }))
		CreateClass( skin, this.FireFighter );
	
}