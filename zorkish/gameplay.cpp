#include "gameplay.h"



gameplay::gameplay() {
	_player = new player();
}


gameplay::~gameplay(){}

void gameplay::display() {
	std::cout << "Input command >" << std::endl;
}

void gameplay::update() {
	std::cin.ignore(1000, '\n');
	std::getline(std::cin, input);
	for (unsigned int i = 0; i < input.length(); ++i) {
		input[i] = tolower(input[i]);
	}
	
	std::vector <std::string> tokens;
	std::stringstream ss(input);
	std::string token; 

	while (getline(ss, token, ' ')) {
		tokens.push_back(token);
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
	else if (tokens[0].compare("equipped?") == 0) {
		_player->getEquipped();
	}
	else if (tokens[0].compare("inventory") == 0) {
		_player->printInven();
	}
	else if (tokens[0].compare("drop") == 0) {
		drop();
	}
	else if (tokens[0].compare("put") == 0) {
		put(tokens[3]);
	}
	else if (tokens[0].compare("take") == 0) {
		take(tokens[1], tokens[3]);
	}
	else {
		std::cout << "wrong command!" << std::endl;
	}
}

void gameplay::take(std::string _item, std::string location) {
	if (location.compare("inventory") == 0) {
		_player->equipItem(_player->searchInven(_item));
	}
}

void gameplay::drop() {
	_player->dropEquipedItem();
}

void gameplay::put(std::string location) {
	if (location.compare("inventory") == 0) {
		_player->storeItem();
	}
}