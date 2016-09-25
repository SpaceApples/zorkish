#pragma once
#include "item.h"
#include <iostream>
#include <string>
#include <vector>
class inventory
{
public:
	inventory();
	~inventory();
	void print();
	void addItem(item*);
	void removeItem(item*);
	item* searchItem(std::string);
private:
	std::vector<item*> inven;
};

