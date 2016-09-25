#include "player.h"



player::player()
{
	_inventory = new inventory();
	equiped = new item("0");
}


player::~player()
{
}

void player::printInven() { 
	_inventory->print();
}
void player::equipItem(item* _item) {
	if (equiped->getName().compare("0") == 0) {
		equiped = _item;
	}
	else
	{
		_inventory->addItem(equiped);
		_inventory->removeItem(_item);
		equiped = _item;
	}
}

item* player::searchInven(std::string _item) {
	return _inventory->searchItem(_item);
}

void player::dropEquipedItem() {
	equiped = new item("0");
}

void player::storeItem() {
	_inventory->addItem(equiped);
	equiped = new item("0");
}

void player::getEquipped() {
	std::cout << equiped->getName();
}