#include "hallFame.h"



hallFame::hallFame(){}


hallFame::~hallFame(){}


void hallFame::display() {
	std::cout << "Zorkish::Hall Of Fame" << std::endl << "--------------------------------------------------------" << std::endl << "Russia 1st" << std::endl << "Crumpet Land 'LAND OF THE FREE" << std::endl 
				<< "Baguette 104329" << std::endl << "Kebab 92143" << std::endl << "Murica Trillion Billlllllion" << std::endl << "Press ESC or Enter to return to the Main Menu" << std::endl;
}

void hallFame::update() {
	while (GetAsyncKeyState(VK_ESCAPE) == 0) {
		if (GetAsyncKeyState(VK_ESCAPE)) {
			stateManager::instance()->setState(new mainMenu());
			std::cout << std::endl;
			delete this;
		}
	}
}