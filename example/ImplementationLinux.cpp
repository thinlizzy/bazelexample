#include "ImplementationLinux.h"
#include <iostream>

ImplementationLinux::ImplementationLinux(std::string version): version(std::move(version)) {}

void ImplementationLinux::doIt()
{
	std::cout << "Linux version = " << version << std::endl;
}

namespace factory {
	Implementation & makeImplementation() {
		// use Scott Meyers singleton
		static ImplementationLinux impl("LINUX!!!");
		return impl;
	}
}
