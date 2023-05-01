#include "main.h"

/**
 * print_line(int n): draws a straight line in the terminal
 * @n: Number of times the character should be printed.
 * 
 * return: Print a straight line.
*/

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}