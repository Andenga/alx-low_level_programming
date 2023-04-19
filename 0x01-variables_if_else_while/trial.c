#include <stdio.h>

/**
 * main - main function
 * print the alphabet in lowecase.
 * except q and e
 * 
 * return: always 0.
*/

int main()
{
    char letter = 'a';
    if (letter <= 'z')
    {
        if (letter != 'q' && letter != 'e')
        {
            putchar(letter);
        }
    }
    putchar('\n');
    return(0);
}





/**
 * Write a program that prints the alphabet in lowercase, followed by a new line.

Print all the letters except q and e
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
All your code should be in the main function
You can only use putchar twice in your code
*/