#pragma once
#include "state.h"
#include "stateManager.h"
#include "gameplay.h"
#include <iostream>
#include <map>
class adventure :
	public state
{
public:
	adventure();
	~adventure();
	void display();
	void update();
private:
	char input = '0';
};

