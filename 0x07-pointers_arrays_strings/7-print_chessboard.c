#include "main.h"
#include <stdio.h>

/**
 * Function that prints chess board game.
 */
void print_chessboard(char (*a)[8])
{
	int i, x;

	for (i = 0; i < 8; i++)
	{
		for (x = 0; x < 8; x++)
		{
			_putchar(a[i][x]);
		}
	}
}