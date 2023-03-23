#include "main.h"

/**
 * Print the number 0 to 9 followed by a new line
 * Don't print 2 and 4.
 *
 * Can only use putchar twice
 */
void print_most_numbers(void)
{   
    int i;
    for (i = 0; i <= 9; i++)
    if (i != 2 && i != 4){
    {
        _putchar(i + '0');
    }
        _putchar('\n');
}}



