#pragma once
#include "state.h"
#include "stateManager.h"
#include <iostream>
#include <string>

class highScore :
	public state
{
public:
	highScore();
	~highScore();
	void display();
	void update();
private:
	std::string input = "0";
};

