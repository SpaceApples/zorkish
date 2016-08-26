#include "adventure.h"



adventure::adventure(){}


adventure::~adventure(){}

void adventure::display() {
	std::cout << "Zorkish :: Select Adventure" << std::endl << "--------------------------------------------------------" << std::endl << "Choose your adventure :" << std::endl << "1. Mountain World"
		<< std::endl << "2. Water World" << std::endl << "3. Box World" << std::endl << "Select 1 - 3 : >" << std::endl;
}

void adventure::update() {
	std::cin >> input;

	switch (input)
	{
	case '1':
		std::cout << "mountain world" << std::endl;
		stateManager::instance()->setState(new gameplay());
		delete this;
		break;
	case '2':
		std::cout << "water world" << std::endl;
		stateManager::instance()->setState(new gameplay());
		delete this;
		break;
	case '3':
		std::cout << "box world" << std::endl;
		stateManager::instance()->setState(new gameplay());
		delete this;
		break;
	default:
		break;
	}
}
