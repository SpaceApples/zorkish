#pragma once
#include "state.h"
#include <iostream>
class about :
	public state
{
public:
	about();
	~about();
	void display();
	void update();
};

