#include "arithmetic.h"

void arithmetic::show()
{
	int x{ 7 }, y{ 4 };
	std::cout << "int / int " << x / y << '\n';
	std::cout << "double/ int " << static_cast<double>(x) / y << '\n';
	std::cout << "double/double " << static_cast<double>(x) / static_cast<double>(y) << '\n';
}
void arithmetic::isEven(int value)
{
	if (value % 2 == 0)
		std::cout << value << " is even\n";
	else
		std::cout << value << " is odd\n";
}