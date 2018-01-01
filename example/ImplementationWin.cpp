#include "ImplementationWin.h"
#include <iostream>

ImplementationWin::ImplementationWin(int state): state(state) {}

void ImplementationWin::doIt()
{
	std::cout << "Windows state = " << state << std::endl;
}

namespace factory {
	Implementation & makeImplementation() {
		// use Scott Meyers singleton
		static ImplementationWin impl(1);
		return impl;
	}
}

