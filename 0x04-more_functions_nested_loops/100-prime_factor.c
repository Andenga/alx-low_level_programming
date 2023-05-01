#include <stdio.h>

int main(void)
{
    long num = 612852475143;
    long factor = 2;

    while (num > 1)
    {
        if (num % factor == 0)
        {
            num /= factor;
            factor--;
        }
        factor++;
    }

    printf("%ld\n", factor);

    return 0;
}

