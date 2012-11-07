/*!
 * Vehicle/functions.inc
 *
 > Priority: 6
 */

stock this.LoadSet( )
{
	for( new i = 0; i < sizeof( this.SpawnLocations ); i++ )
	{
		AddStaticVehicleEx( this.SpawnLocations[ i ][ this.Model ], this.SpawnLocations[ i ][ this.fX ], this.SpawnLocations[ i ][ this.fY ], this.SpawnLocations[ i ][ this.fZ ], this.SpawnLocations[ i ][ this.fRot ], 
		this.SpawnLocations[ i ][ this.Color1 ], this.SpawnLocations[ i ][ this.Color2 ], this.VehicleRespawnTime );
	}
}

stock this.LoadAdminSet( )
{

}