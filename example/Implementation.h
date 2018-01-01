#ifndef IMPLEMENTATION_H_
#define IMPLEMENTATION_H_

class Implementation {
public:
	virtual ~Implementation() = default;
	virtual void doIt() = 0;
};

namespace factory {
	extern Implementation & makeImplementation();
}

#endif
