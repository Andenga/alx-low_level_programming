#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase, followed by a new line
 * 
 * return: zero.
*/

int main()
{
    char letter = 'a';

    while(letter <= 'z')
    {
        putchar(letter);
        letter ++;
    }
    putchar('\n');


    letter = 'A';

    while (letter <= 'Z')
    {
        putchar(letter);
        letter++;
    }
    putchar('\n');
    return (0);
}