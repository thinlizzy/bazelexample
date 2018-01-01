#ifndef FRONTEND_H_
#define FRONTEND_H_

#include "Implementation.h"

class FrontEnd {
public:
	FrontEnd();
	void doIt();
private:
	Implementation &impl;
};

#endif
