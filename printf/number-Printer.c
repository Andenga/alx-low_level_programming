/**
 * print_number - Prints an integer recursively.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
    if (n / 10 != 0)
        print_number(n / 10);
    char c = (n % 10) + '0';
    write(1, &c, 1);
}
