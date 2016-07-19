#include "testGhostHarness.h"
#include <iostream>
#include "ghost.h"

using namespace std;

ghost testGhostObj;

testGhostHarness::testGhostHarness()
{
}


testGhostHarness::~testGhostHarness()
{
}

void testGhostHarness::testMoveLeft()
{
	//declare variable for local use
	float ghostXPosTestOld;
	float ghostXPosTestNew;

	// get old x value
	ghostXPosTestOld = testGhostObj.getGhostXPos();
	// move ghost left by 10
	testGhostObj.moveLeft(10);

	// get new x value
	ghostXPosTestNew = testGhostObj.getGhostXPos();

	// if ghost x pos old is not equal to ghost x pos new then continue
	// else exit early priting debug error message

	if (ghostXPosTestOld != ghostXPosTestNew)
	{
		// if new ghost x pos is equal to old x pos - 10 then test passes
		// else value changes but is not correct, print debug error message
		if (ghostXPosTestNew == ghostXPosTestOld - 10)
		{
			cout << " the test passes." << endl;
		}
		else
		{
			cout << " the new x pos value is not correct, this is an error." << endl;
			cout << "the desired result is new ghost x value to be -10 of the old value" << endl;
		}
	}
	else
	{
		cout << " the old and new ghost x pos values are the same, this is an error." << endl;
		cout << "the desired result is new ghost x value to be -10 of the old value" << endl;
	}

}

void testGhostHarness::testMoveRight()
{
	//declare variable for local use
	float ghostXPosTestOld;
	float ghostXPosTestNew;

	// get old x value
	ghostXPosTestOld = testGhostObj.getGhostXPos();
	// move ghost left by 10
	testGhostObj.moveRight(10);

	// get new x value
	ghostXPosTestNew = testGhostObj.getGhostXPos();

	// if ghost x pos old is not equal to ghost x pos new then continue
	// else exit early priting debug error message

	if (ghostXPosTestOld != ghostXPosTestNew)
	{
		// if new ghost x pos is equal to old x pos - 10 then test passes
		// else value changes but is not correct, print debug error message
		if (ghostXPosTestNew == ghostXPosTestOld + 10)
		{
			cout << " the test passes." << endl;
		}
		else
		{
			cout << " the new x pos value is not correct, this is an error." << endl;
			cout << "the desired result is new ghost x value to be +10 of the old value" << endl;
		}
	}
	else
	{
		cout << " the old and new ghost x pos values are the same, this is an error." << endl;
		cout << "the desired result is new ghost x value to be +10 of the old value" << endl;
	}
}

void testGhostHarness::testMoveUp()
{
	//declare variable for local use
	float ghostYPosTestOld;
	float ghostYPosTestNew;

	// get old y value
	ghostYPosTestOld = testGhostObj.getGhostYPos();
	// move ghost left by 10
	testGhostObj.moveUp(10);

	// get new y value
	ghostYPosTestNew = testGhostObj.getGhostYPos();

	// if ghost y pos old is not equal to ghost x pos new then continue
	// else exit early priting debug error message

	if (ghostYPosTestOld != ghostYPosTestNew)
	{
		// if new ghost y pos is equal to old x pos - 10 then test passes
		// else value changes but is not correct, print debug error message
		if (ghostYPosTestNew == ghostYPosTestOld + 10)
		{
			cout << " the test passes." << endl;
		}
		else
		{
			cout << " the new y pos value is not correct, this is an error." << endl;
			cout << "the desired result is new ghost y value to be + 10 of the old value" << endl;
		}
	}
	else
	{
		cout << " the old and new ghost y pos values are the same, this is an error." << endl;
		cout << "the desired result is new ghost y value to be +10 of the old value" << endl;
	}
}

void testGhostHarness::testMoveDown()
{
	//declare variable for local use
	float ghostYPosTestOld;
	float ghostYPosTestNew;

	// get old y value
	ghostYPosTestOld = testGhostObj.getGhostYPos();
	// move ghost down by 10
	testGhostObj.moveDown(10);

	// get new y value
	ghostYPosTestNew = testGhostObj.getGhostYPos();

	// if ghost y pos old is not equal to ghost x pos new then continue
	// else exit early priting debug error message

	if (ghostYPosTestOld != ghostYPosTestNew)
	{
		// if new ghost y pos is equal to old x pos - 10 then test passes
		// else value changes but is not correct, print debug error message
		if (ghostYPosTestNew == ghostYPosTestOld - 10)
		{
			cout << " the test passes." << endl;
		}
		else
		{
			cout << " the new y pos value is not correct, this is an error." << endl;
			cout << "the desired result is new ghost y value to be - 10 of the old value" << endl;
		}
	}
	else
	{
		cout << " the old and new ghost y pos values are the same, this is an error." << endl;
		cout << "the desired result is new ghost y value to be -10 of the old value" << endl;
	}
}
