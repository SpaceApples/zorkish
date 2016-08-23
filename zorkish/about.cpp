#include "about.h"



about::about(){}


about::~about(){}

void about::display() {
	if (displayed == false) {
		std::cout << "Zorkish::About" << std::endl << "--------------------------------------------------------" << std::endl << "Written by : Jack D"
			<< std::endl << "Press ESC or Enter to return to the Main Menu" << std::endl;
		displayed = true;
	}
}

void about::update(){
	while (GetAsyncKeyState(VK_ESCAPE) == 0) {
		if (GetAsyncKeyState(VK_ESCAPE)) {
			stateManager::instance()->setState(new mainMenu());
			std::cout << std::endl;
			delete this;
		}
	}

}