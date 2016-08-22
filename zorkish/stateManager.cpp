#include "stateManager.h"



stateManager::stateManager(int state)
{
	switch (state)
	{
	case(1): {
		mainMenu->loopMain();
	}

	default:
		mainMenu->loopMain();
		break;
	}
}


stateManager::~stateManager()
{
}
