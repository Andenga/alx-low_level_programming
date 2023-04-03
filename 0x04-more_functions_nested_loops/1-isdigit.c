#include "main.h"

/**
 * Check for digit between 0 and 9
 * 
 * Return 1 if it's a digit, otherwise 0
 */
int _isdigit(int c)
{
	if (c >='0' && c <= '9')
		return (1);
	return (0);
}
