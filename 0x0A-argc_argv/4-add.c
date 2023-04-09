#include <stdio.h>
#include <stdlib.h>

/**
 * Add positive numbers .
 */

int main(int x, char *argv[])
{
	int a, no, sum = 0;

	for (a = 1; a < x; a++)
	{
		for (no = 0; argv[a][no]; no++)
		{
			if (argv[a][no] < '0' || argv[a][no] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[a]);
	}

	printf("%d\n", sum);

	return (0);
}