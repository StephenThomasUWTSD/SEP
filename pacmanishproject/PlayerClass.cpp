//stephens & nathans work file
#include "PlayerClass.h"

PlayerClass::PlayerClass()
{
}

PlayerClass::~PlayerClass()
{
}

float PlayerClass::getX()
{
	// NT work
	// return the x pos value
	return this->xPos;
}

float PlayerClass::getY()
{
	// NT work
	// return the y pos value
	return this-> yPos;
}

float PlayerClass::getPlayerHealth()
{
	// NT work
	// return the player health value
	return this->playerHealth;
}

float PlayerClass::setX(float newX)
{
	// NT work
	// set the new x pos value
	xPos = newX;
}

float PlayerClass::setY(float newY)
{
	// NT work
	// set the new y pos value
	yPos = newY;
}

float PlayerClass::setPlayerHealth(float newHealth)
{
	// NT work
	// set the new player health value
	playerHealth = newHealth;
}
