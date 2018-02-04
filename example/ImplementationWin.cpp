#include "ImplementationWin.h"
#include <iostream>
#include <fstream>

ImplementationWin::ImplementationWin(int state): state(state) {}

void ImplementationWin::doIt()
{
	std::cout << "Windows state = " << state << std::endl;
	auto fs = std::fstream{"data/windows_config.txt"};
	processStream(fs,"data/windows_config.txt");
}

namespace factory {
	Implementation & makeImplementation() {
		// use Scott Meyers singleton
		static ImplementationWin impl(1);
		return impl;
	}
}

