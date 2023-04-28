#include <stdio.h>

/**
 * _attribute_  - premain function
 *
 * Return: nothing(Success).
*/

void __attribute__ ((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}