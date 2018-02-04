#ifndef IMPLEMENTATION_H_
#define IMPLEMENTATION_H_

#include <istream>
#include <string>

class Implementation {
public:
	virtual ~Implementation() = default;
	virtual void doIt() = 0;
protected:
	void processStream(std::istream & is, std::string const & filename);
};

namespace factory {
	extern Implementation & makeImplementation();
}

#endif
