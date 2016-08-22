#pragma once
#include "state.h"
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

