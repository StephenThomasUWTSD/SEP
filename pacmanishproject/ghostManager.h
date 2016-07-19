//"DEVELOPED BY NATHAN JAMES THOMSON - P141062 "
//"demo version control"
class ghostManager
{
private:

protected:
	// ATTRIBUTES
	bool ghost1Alive;
	bool ghost2Alive;
	bool ghost3Alive;
public:

// CONSTRUCTOR & DECONTRUCTOR
	ghostManager();
	~ghostManager();

	//FUNCTION PROTOTYPES
	void spawnEnemy();
	void destroyEnemy();

	//GET FUNCTION PROTOTYPES
	bool getGhost1Alive();
	bool getGhost2Alive();
	bool getGhost3Alive();
	//SET FUNCTION PROTOTYPES
	bool setGhost1Alive(bool newAlive);
	bool setGhost2Alive(bool newAlive);
	bool setGhost3Alive(bool newAlive);
};