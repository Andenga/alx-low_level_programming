#include <stdio.h>

/**
 * Print all arguments it receives.
 */
int main(int x, char *argv[])

{
	int arg;

	for (arg = 0; arg < x; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}