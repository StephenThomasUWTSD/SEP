#include "testGhostManagerHarness.h"
#include "ghostManager.h"
#include <iostream>

using namespace std;

ghostManager ghostManTestObject;

testGhostManagerHarness::testGhostManagerHarness()
{
}


testGhostManagerHarness::~testGhostManagerHarness()
{
}

void testGhostManagerHarness::testSpawnEnemy()
{
	//call the spawn enemy function
	ghostManTestObject.spawnEnemy();

	// test if the ghosts are now alive and cout result
	if (ghostManTestObject.setGhost1Alive == true || ghostManTestObject.setGhost1Alive == true
		|| ghostManTestObject.setGhost3Alive == true)
	{
		std::cout << " The test passes";
	}
	else
	{
		std::cout << "The test fails";
	}
}

void testGhostManagerHarness::testDestroyEnemy()
{
	//call the spawn enemy function
	ghostManTestObject.destroyEnemy();

	// check if the ghost(s) are now destroyed and cout test result
	if (ghostManTestObject.setGhost1Alive == false || ghostManTestObject.setGhost1Alive == false
		|| ghostManTestObject.setGhost3Alive == false)
	{
		std::cout << " The test passes";
	}
	else
	{
		std::cout << "The test fails";
	}
}
