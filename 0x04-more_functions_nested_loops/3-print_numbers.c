#include "main.h"

/**
 * Print the number 0 to 9 followed by a new line
 *
 * Can only use _putchar twice
 */
void print_numbers(void)
{   
    int i;
    for (i = 0; i <= 9; i++)
    {
        _putchar(i + '0');
    }
        _putchar('\n');
}


