//DEVELOPED BY NATHAN JAMES THOMSON - P141062 "

#include "ghost2.h"
#include "ghost.h"

ghost2::ghost2()
{
}

ghost2::~ghost2()
{
}

float ghost2::getShieldHealth()
{
	return this->shieldHealth;
}

float ghost2::getShieldActive()
{
	return this->shieldHealth;
}

void ghost2::setShieldHealth(float NewShieldHealth)
{
	shieldHealth = NewShieldHealth;
}

void ghost2::setShieldActive(float NewShieldActive)
{
	shieldActive = NewShieldActive;
}

void ghost2::activateShield(float shieldHealth)
{
	// Check if shield can be activated
	if (shieldHealth > 0)
	{
		// activate shield
		shieldActive = true;
	}
	else
	{
		return;
	}
}


void ghost2::deactivateShield()
{
	// set shield active to false
	shieldActive = false;
}