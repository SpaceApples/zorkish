#pragma once
#include "inventory.h"
#include "item.h"
#include <string>
class player
{
public:
	player();
	~player();
	void printInven();
	void equipItem(item*);
	item* searchInven(std::string);
	void dropEquipedItem();
	void storeItem();
	void getEquipped();
private:
	inventory* _inventory;
	item* equiped;
};

