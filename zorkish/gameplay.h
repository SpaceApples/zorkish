#pragma once
#include "state.h"
#include "stateManager.h"
#include "mainMenu.h"
#include "highScore.h"
#include "player.h"
#include "item.h"
#include <iostream>
#include <vector>
#include <sstream>
#include <string>

class gameplay :
	public state
{
public:
	gameplay();
	~gameplay();
	void display();
	void update();
	void take(std::string, std::string);
	void drop();
	void put(std::string);
private:
	std::string input = "0";
	player* _player;
};

