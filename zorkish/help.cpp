#include "help.h"



help::help(){}


help::~help(){}

void help::display() {
	
	std::cout << "Zorkish::Help" << std::endl << "---------------------------------------------------" << std::endl << "The following commands are supported :"
		<< std::endl << "quit," << std::endl << "hiscore" << std::endl << "Press ESC or Enter to return to the Main Menu" << std::endl;
}

void help::update() {
	while (GetAsyncKeyState(VK_ESCAPE) == 0) {
		if (GetAsyncKeyState(VK_ESCAPE)) {
			stateManager::instance()->setState(new mainMenu());
			std::cout << std::endl;
			delete this;
		}
	}
}