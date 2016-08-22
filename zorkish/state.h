#pragma once
class state
{
public:
	state();
	~state();
	virtual void display() = 0;
	virtual void update() = 0;
};

