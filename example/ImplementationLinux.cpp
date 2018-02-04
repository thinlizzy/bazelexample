#include "ImplementationLinux.h"
#include <iostream>
#include <fstream>

ImplementationLinux::ImplementationLinux(std::string version): version(std::move(version)) {}

void ImplementationLinux::doIt()
{
	std::cout << "Linux version = " << version << std::endl;
	auto fs = std::fstream{"data/linux_config.txt"};
	processStream(fs,"data/linux_config.txt");
}

namespace factory {
	Implementation & makeImplementation() {
		// use Scott Meyers singleton
		static ImplementationLinux impl("LINUX!!!");
		return impl;
	}
}
