#pragma once
#include "state.h"
#include "mainMenu.h"
#pragma once

class stateManager
{
public:
	static stateManager* instance();
	stateManager();
	~stateManager();
	void update();
	bool getQuit();
	void setQuit(bool);
	void setState(state*);
private:
	state* currentState;
	static stateManager* _instance;
	bool quit = false;

};

