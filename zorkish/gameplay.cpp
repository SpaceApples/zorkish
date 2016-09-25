#include "gameplay.h"



gameplay::gameplay(){}


gameplay::~gameplay(){}

void gameplay::display() {
	std::cout << "Input command >" << std::endl;
}

void gameplay::update() {
	std::cin >> input;
	for (unsigned int i = 0; i < input.length(); ++i) {
		input[i] = tolower(input[i]);
	}
	if (input.compare("quit") == 0) {
		stateManager::instance()->setState(new mainMenu());
		std::cout << std::endl;
		input = "0";
		delete this;
	}
	else if (input.compare("hiscore") == 0) {
		stateManager::instance()->setState(new highScore());
		std::cout << std::endl;
		input = "0";
		delete this;
	} 
	else {
		std::cout << "wrong command!" << std::endl;
	}
}
