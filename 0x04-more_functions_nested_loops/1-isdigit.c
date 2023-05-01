#include "main.h"

/**
 * int _isdigit(int c); checks for a digit(0 through 9)
 * @c: Input.
 * 
 * return: 1 if c is a digit, 0 otherwise.
*/

int _isdigit(int c)
{
    if (c <= 48 && c <= 57)
        return(1);
	else 
    	return(0);
}