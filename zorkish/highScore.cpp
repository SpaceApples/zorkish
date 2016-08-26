#include "highScore.h"



highScore::highScore(){}


highScore::~highScore(){}

void highScore::display() {
	std::cout << "Insert name!" << std::endl;
}

void highScore::update() {
	std::cin >> input;
	if (input != "0") {
		stateManager::instance()->setState(new hallFame());
		std::cout << std::endl;
		delete this;
	}
}
