#include <stdio.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main() {
    int i, j, k;

    for(i = 0; i < 10; i++) {
        for(j = i; j < 10; j++) {
            for(k = j; k < 10; k++) {
                putchar(i + '0');
                putchar(',');
                putchar(' ');
                putchar(j + '0');
                putchar(',');
                putchar(' ');
                putchar(k + '0');
                putchar(',');
                putchar(' ');
            }
        }
    }

    return 0;
}


//ALX right answer.

#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
