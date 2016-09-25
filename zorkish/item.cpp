#include "item.h"



item::item(std::string _name)
{
	name = _name;
}


item::~item() {}

std::string item::getName() { return name; }
