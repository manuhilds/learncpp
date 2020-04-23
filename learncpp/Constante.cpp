#include "Constante.h"

/*
 *  Runtime constants: constant whose initialization value con only be resolved at runtime(function, or cin input)
 *  Compile time constants: constant whose initialization value : value already defined in code.
 * 
 *  the keyword constexpr is used to ensure the constant to be a compile-time constant :
 *      - variables that should not be modifiable after initialization 
 *      - variables whose initializer is known at compile-time.
 */

void Constante::show()
{
    constexpr int maxStudentsPerClass{ 30 };
    constexpr int maxNameLength{ 30 };

    std::cout << "Enter a radius:";
    int radius{};
    std::cin >> radius;
    double circumference{ 2.0 * radius * constants::pi };
    std::cout << "The circumference is: " << circumference << '\n';
}

void Constante::ball_thingy(int tower_height)
{
    /* ball dropped off of a tower
     * par : height of the tower(m)
     * shows distance ball-ground at 0,1,2,3,4,5 s
     */
    int sec[6] = { 0,1,2,3,4,5 };
    double distance_fallen;
    for (auto i : sec)
    {
        distance_fallen = constants::my_gravity * i*i / 2;
        std::cout << "At " << i << "seconds, the ball is ";
        if (float(tower_height) - distance_fallen <= 0)
            std::cout << "on the ground.\n";
        else
            std::cout << "at height: " << tower_height - distance_fallen << " meters\n";
    }
}