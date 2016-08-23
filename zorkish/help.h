#pragma once
#include "state.h"
#include "stateManager.h"
#include <Windows.h>
#include <iostream>
class help :
	public state
{
public:
	help();
	~help();
	void display();
	void update();
};

