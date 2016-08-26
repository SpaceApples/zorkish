#pragma once
#include "state.h"
#include "stateManager.h"
#include "about.h"
#include "help.h"
#include "adventure.h"
#include "hallFame.h"
#include <iostream>
class mainMenu :
	public state
{
public:
	mainMenu();
	~mainMenu();
	void display();
	void update();
private:
	char input = '0';
};

