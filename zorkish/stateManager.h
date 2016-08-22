#include "mainMenu.h"


#pragma once
class stateManager
{
public:
	stateManager(int state);
	~stateManager();
private:
	mainMenu mainMenuState;
};

