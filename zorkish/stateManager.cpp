#include "stateManager.h"


stateManager* stateManager::_instance = NULL;

stateManager::stateManager(){
	currentState = new mainMenu();
}


stateManager::~stateManager() { delete this; }

stateManager* stateManager::instance() {
	if (_instance == NULL) {
		_instance = new stateManager;
	}
	return _instance;
}

void stateManager::update() {
	currentState->display();
	currentState->update();
}

void stateManager::setQuit(bool _quit) { quit = _quit; }

bool stateManager::getQuit() { return quit; }

