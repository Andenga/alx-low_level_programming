#include <stdio.h>

/**
 * main - print lowercase alphabet in reverse
 * 
 * return: always 0.
*/
int main(void)
{
    char letter;

    for(letter = 'z'; letter > 'a'; letter--)
    putchar(letter);

    putchar('\n');
    
    return (0);
}










/**
Write a program that prints the lowercase alphabet in reverse, followed by a new line.

You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
All your code should be in the main function
You can only use putchar twice in your code
*/