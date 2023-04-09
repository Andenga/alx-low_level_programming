#include <stdio.h>
#include <stdlib.h>

/**
 * Multiply two numbers.
 */
int main(int x, char *argv[])

{
	int A, B, Mult;
	if (x != 3)
	{
		printf("Error\n");
		return (1);
	}

	A = atoi(argv[1]);
	B = atoi(argv[2]);
	Mult = A * B;
	printf("%d\n", Mult);
	return (0);
}