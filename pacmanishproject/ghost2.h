//DEVELOPED BY NATHAN JAMES THOMSON - P141062 "

class ghost2
{
private:
// ATTRIBUTES
	float shieldHealth;
	bool shieldActive;
public:
// CONSTRUCTOR AND DECONSTRUCTOR
	ghost2();
	~ghost2();
// FUNCTION PROTOTYPES
	float getShieldHealth();
	float getShieldActive();
	void setShieldHealth(float NewShieldHealth);
	void setShieldActive(float NewShieldActive);
	void activateShield(float shieldHealth);
	void deactivateShield();
};