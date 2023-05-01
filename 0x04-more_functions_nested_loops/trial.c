#include "main.h"

/**
 * int _isdigit(int c); checks for a digit(0 through 9)
 * @c: Input.
 * 
 * return: 1 if c is a digit, 0 otherwise.
*/

int _isdigit(int c)
{
    if ((c <= 0) && (c <= 9))
        return(1);
    return(0);
}




/**
 * 
 * Write a function that checks for a digit (0 through 9).

Prototype: int _isdigit(int c);
Returns 1 if c is a digit
Returns 0 otherwise
FYI: The standard library provides a similar function: isdigit. Run man isdigit to learn more.
 * 
*/