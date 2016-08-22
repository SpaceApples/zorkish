#include "mainMenu.h"
#include "stateManager.h"



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
		std::cout << "Adventure" << std::endl;
		break;
	case '2':
		std::cout << "fame" << std::endl;
		break;
	case '3':
		std::cout << "halp" << std::endl;
		break;
	case '4':
		std::cout << "about" << std::endl;
		break;
	case '5':
		std::cout << "quit" << std::endl;
		stateManager::instance()->setQuit(true);
		break;
	default:
		break;
	}
}
