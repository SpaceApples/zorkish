#include "stateManager.h"
#include <iostream>



int main() {

	while (stateManager::instance()->getQuit() != true) {
		stateManager::instance()->update();
	}

	return 0;
}