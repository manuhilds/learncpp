#include "size_types.h"

void size_types::show()
{
	std::cout << "bool:       \t\t" << sizeof(bool) << " bytes\n";
	std::cout << "char:       \t\t" << sizeof(char) << " bytes\n";
	std::cout << "wchar_t:    \t\t" << sizeof(wchar_t) << " bytes\n";
	std::cout << "char16_t:   \t\t" << sizeof(char16_t) << " bytes\n";
	std::cout << "char32_t:   \t\t" << sizeof(char32_t) << " bytes\n";
	std::cout << "short:      \t\t" << sizeof(short) << " bytes\n";
	std::cout << "int:        \t\t" << sizeof(int) << " bytes\n";
	std::cout << "long:       \t\t" << sizeof(long) << " bytes\n";
	std::cout << "long long:  \t\t" << sizeof(long long) << " bytes\n";
	std::cout << "float:      \t\t" << sizeof(float) << " bytes\n";
	std::cout << "double:     \t\t" << sizeof(double) << " bytes\n";
	std::cout << "long double:\t\t" << sizeof(long double) << " bytes\n";

	// fixed-width integers

	std::cout << "\n FIXED-WIDTH INTEGERS:\n\n";
	
	std::cout << "std::int8_t:  \t" << sizeof(int8_t) << " bytes\t" << "range: (" << INT8_MIN << "," << int(INT8_MAX) << ")\n";
	std::cout << "std::uint8_t: \t" << sizeof(uint8_t) << " bytes\t" << "range: (" << 0 << "," << unsigned int(UINT8_MAX) << ")\n";
	std::cout << "std::int16_t: \t" << sizeof(int16_t) << " bytes\t" << "range: (" << INT16_MIN << "," << INT16_MAX << ")\n";
	std::cout << "std::uint16_t:\t" << sizeof(uint16_t) << " bytes\t" << "range: (" << 0 << "," << UINT16_MAX << ")\n";
	std::cout << "std::int32_t: \t" << sizeof(int32_t) << " bytes\t" << "range: (" << INT32_MIN << "," << INT32_MAX << ")\n";
	std::cout << "std::uint32_t:\t" << sizeof(uint32_t) << " bytes\t" << "range: (" << 0 << "," << UINT32_MAX << ")\n";
	std::cout << "std::int64_t: \t" << sizeof(int64_t) << " bytes\t" << "range: (" << INT64_MIN << "," << INT64_MAX << ")\n";
	std::cout << "std::uint64_t:\t" << sizeof(uint64_t) << " bytes\t" << "range: (" << 0 << "," << UINT64_MAX << ")\n";

	// fast and least integers 

	std::cout << "\n FAST & LONG INTEGERS:\n\n";

	std::cout << "fast 8: " << sizeof(std::int_fast8_t) * 8 << " bits\n";
	std::cout << "fast 16: " << sizeof(std::int_fast16_t) * 8 << " bits\n";
	std::cout << "fast 32: " << sizeof(std::int_fast32_t) * 8 << " bits\n";

	std::cout << "least 8: " << sizeof(std::int_least8_t) * 8 << " bits\n";
	std::cout << "least 16: " << sizeof(std::int_least16_t) * 8 << " bits\n";
	std::cout << "least 32: " << sizeof(std::int_least32_t) * 8 << " bits\n";

	// Literals

	/* 
		
	*/
	std::cout << "\n LITERALS:\n";

	std::cout << " OCTAL : " << "\n";
	int x{ 023 };
	std::cout << x << "\n";
	int y{};
	x = 0x01;
	int z{};
	z = 0xFEAB;
	std::cout << z << "\n";
	int bin{ 0b1011'0010 };
	long value(2'232'320);
	std::cout << bin << '\n';
	std::cout << std::hex << bin << '\n';
	std::cout << std::oct << bin << '\n';

}