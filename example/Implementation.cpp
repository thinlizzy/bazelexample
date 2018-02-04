#include "Implementation.h"
#include <iostream>

void Implementation::processStream(std::istream & is, std::string const & filename)
{
	if( !is ) {
		std::cout << "can't read " << filename << std::endl;
	}
	
	std::string line;
	std::getline(is,line);
	std::cout << "first line = " << line << std::endl;	
}
