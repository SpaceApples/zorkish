#include "gameplay.h"



gameplay::gameplay()
{
}


gameplay::~gameplay()
{
}

void gameplay::display() {
	std::cout << "Input command >" << std::endl;
}

void gameplay::update() {
	std::cin >> input;
	if (input == "quit") {
		stateManager::instance()->setState(new mainMenu());
		std::cout << std::endl;
		delete this;
	}
	if (input == "hiscore") {
		stateManager::instance()->setState(new highScore());
		std::cout << std::endl;
		delete this;
	}
}
