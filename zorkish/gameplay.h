#pragma once
#include "state.h"
#include "stateManager.h"
#include "mainMenu.h"
#include "highScore.h"
#include <iostream>
#include <algorithm>
#include <string>

class gameplay :
	public state
{
public:
	gameplay();
	~gameplay();
	void display();
	void update();
private:
	std::string input = "0";
};

