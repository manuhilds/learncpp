#pragma once
#include "header_necessity.h"
/*
 *  operator   : symbol or pair of symbols specifying an operation between 2 operands
 *  precedence : order in which operators are evaluated 
 *  associativity    : tells in which direction to evalutate when 2 operators have the same precedence level (R->L),(L->R)
 *  parenthesization : use of parenthesis to change the order ol application of operations
 *  check list : "https://www.learncpp.com/cpp-tutorial/operator-precedence-and-associativity/"
 */

/*
*   Arithmetic operators: 
*   - Unary arithmetic operators ( + , - )
*       (-) : returns the operand multiplied by -1
*       (+) : returns the value of the operand.
*   - Binary arithmetic operators ( +,-,*,/,%)
        (+) : addition
        (-) : substraction
        (*) : multiplication
        (/) : division
        (%) : modulus(remainder) : returns the remainder of the division on the 2 operands
    # division between 2 integers will drop any fraction and return an integer
*/

/*
*   Arithmetic assignment operators : 
*   (x+=y) -> x = x+y
    (x-=y) -> x = x-y
    (x*=y) -> x = x*y
    (x/=y) -> x = x/y
    (x%=y) -> x get the remainder of x/y
*/

/*
*   Modulus :
*   # only works with integers
*   # most useful for testing whether a number is evenly divisible by another number (evaluation by 0)
*/

/*
*   exponent operator ? 
*   can be found in the library cmath
*/

/*
*   pre-incrementing vs pos-incrementing:
*   pre-incrementing  : operand is incremented then expression evaluates to the incremented value of the operand
*   post-incrementing : copy of operand is made, operand incremented, copy not incremented evaluated
*   # favor the prefix version
*/

/*
*   side effects : when an expression,function does anything that persists beyond the life of the expression,function
*   # C++ does not define the order of evaluaton for function arguments or operator operands.
*   # don't use a variable that has a side effect applied to it more than once in a given statement.
*/

/*
*   (,): allows the evaluation of multiple expressions whereven a single expression is allowed
*   (L->R) then returns the result of the right operand.
*   # avoid using the comma 
*/

/*
*   conditional operator: shorthand method for doing a if/else statement, takes 3 operands
*   has it evaluates as an expression rather than a statement, can be used where if/else can't
*   ex: conditionnal initialization of a const variable.
*   # both operands must be convertible.
*   # only use it where the result is used and where it enhances readibility.
*/
extern int add(int, int);
class Operators
{
public:
    void show();
};

