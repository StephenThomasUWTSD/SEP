//stephens file
#include "TestMapClass.h"
#include <iostream>


TestMapClass::TestMapClass()
{
}
void TestMapClass::TestPlacetile()
{
	//GL_QUAD = tilesize; here 
	if (tilesize=1)
	{
		std::cout << "test passed" << std::endl;
	}
	else
	{
		std::cout << "test failed" << std::endl;
	}
}
int tilenum = 20;
void TestMapClass::TestTileLoop()
{
	for (int x; x < tilenum; x++)
	{
		for (int y; y < tilenum; y++)
		{
			if (tilenum = 20 * 20)
			{
				std::cout << "test passed" << std::endl;
			}
			else 
			{
				std::cout << "test failed" << std::endl;
			}
		}
	}
}


TestMapClass::~TestMapClass()
{
}
