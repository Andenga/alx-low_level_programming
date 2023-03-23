#include "main.h"

/**
 * Print 10 times the numbers from 0 to 14, followed by a new line.
 */
void more_numbers(void)
{   
    int i;
    for (i = 0; i <= 14; i++)
    i = i * 10;
    {
        _putchar(i + '0');
    }
        _putchar('\n');
}



