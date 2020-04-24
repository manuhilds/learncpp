#include "Operators.h"


void Operators::show()
{
	int x{ 7 }, y{ 4 };
	// division between 3 integers returns an integer
	std::cout << "int / int " << x / y << '\n';
	// division between double and an integer returns a double. same for an integer
	// static_cast is used to convert integer into double
	std::cout << "double/ int " << static_cast<double>(x) / y << '\n';
	std::cout << "double/double " << static_cast<double>(x) / static_cast<double>(y) << '\n';

	// modulus : test of evenly divisible.
	std::cout << "The remainder is : " << x % y<<'\n';
	if ((x % y) == 0)
		std::cout << x << " is evenly divisible by " << y << '\n';
	else
		std::cout << x << " is not evenly divisible by " << y << '\n';

	// exponent 
	double z{ std::pow(3.0, 4.0) }; // 3 to the 4th power
	std::cout << z << '\n';

	// pre- vs post- incrementing 
	x = 2, y = 2;
	// x takes the value of the incremented y
	x = ++y;
	std::cout << x << ' ' << y << '\n';
	x = 2, y = 2;
	// x takes the value of y pre-incrementation.
	x = y++;
	std::cout << x << ' ' << y << '\n';
	
	// check the evaluation order of a function with an argument having a side effect
	// x = 2, if solution is 6 (R->L), if solution is 5(L->R)
	std::cout << add(x, ++x) << '\n';

	// (,) x = 3, y = 3
	std::cout << (x, ++y) << '\n';

	// exemple of conditional operator 
	std::cout << "larger between x and y : " << (x > y) ? x : y << '\n';

	// as the conditional operator has a lower precedence that the << operator
	// the whole expression needs to be parenthesized 
	std::cout << "larger between x and y : " << ((x > y) ? x : y) << '\n';

	// conditionnal initialization of a const variable
	const int larger{ (x > y) ? x : y };
}

int add(int x, int y)
{
	return x + y;
}