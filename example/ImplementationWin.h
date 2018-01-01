#ifndef IMPLEMENTATION_WIN_H_
#define IMPLEMENTATION_WIN_H_

#include "Implementation.h"

class ImplementationWin: public Implementation {
	int state;
public:
	ImplementationWin(int state);
	void doIt() override;
};

#endif
