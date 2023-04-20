#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/***
 * Write a function that prints numbers, followed by a new line.
 * Prototype: void print_numbers(const char *separator, const unsigned int n, ...);
 * where separator is the string to be printed between numbers
 * and n is the number of integers passed to the function
 *    
 * You are allowed to use printf
 * If separator is NULL, don’t print it
 * Print a new line at the end of your function
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
    unsigned int i;
	int num;
	va_list numbers;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(numbers, int);
		printf("%d", num);
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);

}














