#pragma once
#include "state.h"
#include "stateManager.h"
#include <Windows.h>
#include <iostream>
class about :
	public state
{
public:
	about();
	~about();
	void display();
	void update();

private:
	bool displayed = false;
};

