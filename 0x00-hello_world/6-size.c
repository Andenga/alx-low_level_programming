#include <stdio.h>

/**
 * main: prints the size of various types on the computer it is compiled and run on.
 * 
 * return 0.
*/

int main()
{
    printf("Size of a char: %zu byte(s)\n", sizeof(char));
    printf("Size of an int: %zu byte(s)\n", sizeof(int));
    printf("Size of an long int: %zu byte(s)\n", sizeof(long int));
    printf("Size of an long long int: %zu byte(s)\n", sizeof(long long int));
    printf("Size of an float: %zu byte(s)\n", sizeof(float));
}