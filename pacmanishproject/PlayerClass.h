//stephens & nathans file
// nathan = NT
// stephen = ST
#pragma once
class PlayerClass
{
private:
// GET FUNCTION PROTOTYPES
	float getX(); // NT work
	float getY(); // NT work
	float getPlayerHealth(); // NT work

// SET FUNCTION PROTOYPES
	float setX(float newX); // NT work
	float setY(float newY); // NT work
	float setPlayerHealth(float newHealth); // NT work
public:
	PlayerClass();
	~PlayerClass();

// ATTRIBUTES
	float xPos; // NT work
	float yPos; // NT work
	float playerHealth; // NT work

};

