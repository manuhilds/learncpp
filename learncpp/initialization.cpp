#include "initialization.h"


void initialization::show()
{
	int copy = 5;			// copy initialization 
	int direct(5);			// direct initialization
	int uniform{ 5 };		// uniform initialization - should be preferred
	int zero_init{};		// equals to initialize to zero

	//int zero_init1;			// don't know what value it has
	//std::cout << zero_init1;
}
// uniform init : disallow "narrowing" conversions : throw error when value doesn't fit
//int type_error{ 4.5 };  // will throw a narrowing error.
/*
	std::endl vs \n :

		- std::endl moves the cursor to the next line and flushes the output
		- \n just move the cursor to the next line
		preferred : \n over endl

	std::cin :

	nested functions aren't supported
	suffix _t : modern types

*/
