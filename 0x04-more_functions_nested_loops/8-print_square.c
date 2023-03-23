#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line
 * 
 * Return: a square made of '#'
 */
void print_square(int size)
{
	int i, x;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			_putchar('#');
			for (x = 2; x <= size; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
