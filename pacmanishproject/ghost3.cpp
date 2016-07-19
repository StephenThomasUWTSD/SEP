//DEVELOPED BY NATHAN JAMES THOMSON - P141062 "
#include "ghost3.h"


ghost3::ghost3()
{
}

ghost3::~ghost3()
{
}

float ghost3::getStamina()
{
	return this->stamina;
}

float ghost3::setStamina(float newStamina)
{
	stamina = newStamina;
}

void ghost3::sprint(float stamina)
{
	// check if can sprint
	if (stamina > 0)
	{
		sprinting = true;
	}
	// else if it is less than or equals to 0
	else if( stamina <= 0)
	{
		sprinting = false;
		return;
	}
}
