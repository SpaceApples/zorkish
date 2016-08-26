#include "mainMenu.h"



mainMenu::mainMenu()
{
}


mainMenu::~mainMenu()
{
} 


void mainMenu::display(){
	std::cout << "Zorkish :: Main Menu" << std::endl << "--------------------------------------------------------" << std::endl << "Welcome to Zorkish Adventures"
		<< std::endl << "1. Select Adventure and Play" << std::endl << "2. Hall Of Fame" << std::endl << "3. Help" << std::endl << "4. About" << std::endl <<
		"5. Quit" << std::endl << "Select 1 - 5:>" << std::endl;
}

void mainMenu::update() {
	std::cin >> input;
	switch (input)
	{
	case '1':
		stateManager::instance()->setState(new adventure());
		std::cout << std::endl;
		delete this;
		break;
	case '2':
		stateManager::instance()->setState(new hallFame());
		std::cout << std::endl;
		delete this;
		break;
	case '3':
		stateManager::instance()->setState(new help());
		std::cout << std::endl;
		delete this;
		break;
	case '4':
		stateManager::instance()->setState(new about());
		std::cout << std::endl;
		delete this;
		break;
	case '5':
		stateManager::instance()->setQuit(true);
		break;
	default:
		break;
	}
}
