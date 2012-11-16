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
		this.PublicService
/*		this.Ammunation,
		this.Construction*/
	;
		
	this.FireFighter = CreateSpawnArea(
		.interior = 0,
		.minx = 2778.711,
		.maxx = 2304.888,
		.miny = 2876.332,
		.maxy = 2424.798
	);

	foreach (new skin : Numbers({277, 278, 279, 277, 278, 279, 277 }))
		CreateClass( skin, this.FireFighter );
	
	this.PublicService = CreateSpawnLocation(
		.interior = 0,
		.x        = 1745.3087,
		.y        = 2077.5161,		
		.z        = 10.8203,
		.rot      = 201.5947
	);
	
/*	this.Ammunation = CreateSpawnLocation(
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
	*/
	
	
	foreach (new skin : Numbers({155, 167}))
		CreateClass(skin, this.PublicService);
	
/*	// Ammu-nation guy skin
	CreateClass(179, this.Ammunation);
	
	// Construction workers
	foreach (new skin : Numbers({27, 260}))
		CreateClass(skin, this.Construction);
	
	foreach (new skin : Numbers({277, 278, 279, 277, 278, 279, 277 }))
		CreateClass( skin, this.FireFighter );
	*/
}