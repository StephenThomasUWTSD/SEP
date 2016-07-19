#include "ghostManager.h"
//DEVELOPED BY NATHAN JAMES THOMSON - P141062 "
//demo version control"

ghostManager::ghostManager()
{
}

ghostManager::~ghostManager()
{
}

void ghostManager::spawnEnemy()
{
	// SPAWN ENEMY CODE GOES HERE
}

void ghostManager::destroyEnemy()
{
	// DESTROY ENEMY CODE GOES HERE

	// ghost instance destroy
	// set ghost alive = false
}

bool ghostManager::getGhost1Alive()
{
	// get the ghost 1 alive value
	return this->getGhost1Alive;
}

bool ghostManager::getGhost2Alive()
{
	// get the ghost 2 alive value
	return this->getGhost2Alive;
}

bool ghostManager::getGhost3Alive()
{
	// get the ghost 3 alive value
	return this->getGhost3Alive;
}

bool ghostManager::setGhost1Alive(bool newAlive)
{
	// set the new ghost 1 alive value
	ghost1Alive = newAlive;
}

bool ghostManager::setGhost2Alive(bool newAlive)
{
	// set the new ghost 2 alive value
	ghost2Alive = newAlive;
}

bool ghostManager::setGhost3Alive(bool newAlive)
{
	// set the new ghost 3 alive value
	ghost3Alive = newAlive;
}

