//includes
#include "ghost.h"
#include "ghostManager.h"
#include "ghostPathfinding.h"
//DEVELOPED BY NATHAN JAMES THOMSON - P141062 "

ghostManager ghostManagerClass;
ghostPathfinding ghostPathfindingClass;

ghost::ghost()
{
}

ghost::~ghost()
{
}

float ghost::getGhostXPos()
{
	return this->ghostXPos;
}

float ghost::getGhostYPos()
{
	return this->ghostYPos;
}

float ghost::getGhostHealth()
{
	return this->ghostHealth;
}

float ghost::getGhostSpeed()
{
	return this->ghostSpeed;
}

void ghost::setGhostXPos(float newXpos)
{
	ghostXPos = newXpos;
}

void ghost::setGhostYpos(float newYpos)
{
	ghostYPos = newYpos;
}

void ghost::setGhostHealth(float newHealth)
{
	ghostHealth = newHealth;
}

void ghost::setGhostSpeed(float newSpeed)
{
	ghostSpeed = newSpeed;
}

void ghost::moveLeft(float x)
{
	// move the ghost right by value passed in
	ghostXPos = ghostXPos - 1;
}

void ghost::moveRight(float x)
{
	// move the ghost right by value passed in
	ghostXPos = ghostXPos + x ;
}

void ghost::moveUp(float y)
{
	// move the ghost up by value passed in
	ghostYPos = ghostYPos + 1;
}

void ghost::moveDown(float y)
{
	// move the ghost down by value passed in
	ghostYPos = ghostYPos - 1;
}

void ghost::pathfinder()
{
	// path finding code here
}

bool ghost::checkIsKillable(bool ghostKillable)
{
	// Check if the ghost is killable.
	// If it is killable return true.
	// elseif return false when the ghost is not killable
	// return 1 if neither condition are met and an error is present
	if (ghostKillable == true)
	{
		return true;
	}
	else if (ghostKillable == false)
	{
		return false;
	}
	else
	{
		return 1;
	}
}
