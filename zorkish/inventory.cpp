#include "inventory.h"



inventory::inventory()
{
	inven.push_back(new item("sword"));
	inven.push_back(new item("shield"));
}


inventory::~inventory(){}

void inventory::addItem(item* _item) {
	inven.push_back(_item);
}

item* inventory::searchItem(std::string _item) {
	for (int i = 0; i < inven.size(); i++) {
		if (inven[i]->getName() == _item) {
			return inven[i];
		}
	}
}

void inventory::removeItem(item* _item) {
	for (int i = 0; i < inven.size(); i++) {
		if (inven[i]->getName() == _item->getName()) {
			delete inven[i];
		}
	}
}

void inventory::print() {
	for (int i = 0; i < inven.size(); i++) {
		std::cout << inven[i]->getName() << std::endl;
	}
}