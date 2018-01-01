#ifndef IMPLEMENTATION_LINUX_H_
#define IMPLEMENTATION_LINUX_H_

#include "Implementation.h"
#include <string>

class ImplementationLinux: public Implementation {
	std::string version;
public:
	ImplementationLinux(std::string version);
	void doIt() override;
};

#endif
