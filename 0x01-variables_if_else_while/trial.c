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
    {
        char ch = numbers;
        putchar(ch);
    }

    putchar('\n');
    return(0);
}













/**
 * Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

You are not allowed to use any variable of type char
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
You can only use putchar twice in your code
All your code should be in the main function
*/