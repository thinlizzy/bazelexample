#include "FrontEnd.h"

FrontEnd::FrontEnd(): impl(factory::makeImplementation()) {}

void FrontEnd::doIt() { impl.doIt(); }
