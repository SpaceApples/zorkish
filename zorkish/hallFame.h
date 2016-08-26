#pragma once
#include "state.h"
#include "stateManager.h"
#include <iostream>
#include <Windows.h>
class hallFame :
	public state
{
public:
	hallFame();
	~hallFame();
	void display();
	void update();
};

