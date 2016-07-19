#pragma once
//DEVELOPED BY NATHAN JAMES THOMSON - P141062 "
class ghost
{
private:
protected:
// ATTRIBUTE DECLARATIONS
	float ghostXPos;
	float ghostYPos;
	float ghostHealth;
	float ghostSpeed;
	bool ghostKillable;
	// search:GhostPathfinding

public:
// FUNCTION PROTOTYPES
// CONSTRUCTOR & DECONSTRUCTOR
	ghost();
	~ghost();
//GET FUNCTIONS PROTOTYPES
	float getGhostXPos();
	float getGhostYPos();
	float getGhostHealth();
	float getGhostSpeed();

//SET FUNCTIONS PROTOTYPES
	void setGhostXPos(float newXPos);
	void setGhostYpos(float newYPos);
	void setGhostHealth(float newHealth);
	void setGhostSpeed(float newSpeed);

// MOVE FUNCTIONS
	void moveLeft(float x);
	void moveRight(float x);
	void moveUp(float y);
	void moveDown(float y);

// OTHER FUNCTIONS PROTOTYPES
	void pathfinder();
	bool checkIsKillable(bool ghostKillable);
	//bool checkInRange(player:PlayerClass);
	//doDamage(player:PlayerClass);


};