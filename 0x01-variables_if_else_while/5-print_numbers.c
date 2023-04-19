#include <stdio.h>

/**
 * main - print all single digit numbers of base 10 starting from 0.
 * 
 * return: always 0.
*/

int main()
{
    int numbers;

    for(numbers = 0; numbers < 10; numbers++)
        printf("%d", numbers);
    
    printf("\n");

    return (0);
}