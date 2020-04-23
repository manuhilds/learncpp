#pragma once
#include "header_necessity.h"
class Constante
{
public:

	void show();
	void ball_thingy(int);
};

// namespace to hold constants
namespace constants
{
	constexpr double pi{ 3.14159 };
	constexpr double avogadro{ 6.0221413e23 };
	constexpr double my_gravity{ 9.8 };
}
