#include "stateManager.h"


stateManager* stateManager::_instance = NULL;

stateManager::stateManager(){
	currentState = new mainMenu();
}


stateManager::~stateManager() {}

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

void stateManager::setState(state* _state) { currentState = _state; }

void stateManager::setQuit(bool _quit) { quit = _quit; }

bool stateManager::getQuit() { return quit; }

