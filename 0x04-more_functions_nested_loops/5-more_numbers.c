#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 * Return: 0-14 times 10
 */
void more_numbers(void)
{
	int i, x;

	for (x = 0; x < 10; x++)
	{
		for (i = 0; i <= 14; i++)
		{

			_putchar((i) + '0');
		}
		_putchar('\n');
	}
}
