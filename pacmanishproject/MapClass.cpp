//stephens file
#include "MapClass.h"


MapClass tile;
MapClass::MapClass()
{
}
void MapClass::placetile()
{
	//GL_QUAD = tilesize; here 
}
int tilenum = 20;
void MapClass::TileLoop()
{
	for (int x; x < tilenum; x++)
	{
		for (int y; y < tilenum; y++)
		{
			tile.placetile();
		}
	}
}


MapClass::~MapClass()
{
}
