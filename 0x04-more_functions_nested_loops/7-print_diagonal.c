#include "main.h"

/**
 * print_diagonal(int n): draws a diagonal line in the terminal
 * @n: Number of times the character should be printed
 * 
 * Return: \n if n is 0 or less, otherwise a diagnol line.
*/

void print_diagonal(int n)
{
	int x, i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= n; x++)
		{
			for (i = 1; i < x; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}