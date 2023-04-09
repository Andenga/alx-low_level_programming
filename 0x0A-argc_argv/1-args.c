#include <stdio.h>

/**
 * Print the number of arguments passed to it
 */
int main(int argc, char __attribute__((__unused__)) *argv[])

{
	printf("%d\n", argc - 1);
	return (0);
    
}