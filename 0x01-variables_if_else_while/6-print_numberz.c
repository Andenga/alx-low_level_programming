#include <stdio.h>

/**
 * main - print all single digit numbers of base 10.
 * 
 * return: always 0(success).
*/
int main(void)
{
    int numbers;

    for(numbers = 0; numbers < 10; numbers++)
	putchar(numbers + '0');

    putchar('\n');

    return(0);
}