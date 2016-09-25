#pragma once
#include <string>
class item
{
public:
	item(std::string);
	~item();
	std::string getName();
private:
	std::string name;
};

