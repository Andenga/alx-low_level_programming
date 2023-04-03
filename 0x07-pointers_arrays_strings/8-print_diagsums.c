#include <stdio.h>
#include "main.h"

/**
 * Print sum of 2 diagnols.
 */
void print_diagsums(int *a, int size)
{
	int i;

	unsigned int x, y;
	x = 0;
	y = 0;
	for (i = 0; i < size; i++)
	{
		x = x + a[(size * i) + i];
		y = y + a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d", y, x);
}