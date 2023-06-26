#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints a number (integer) with field width.
 * @args: The list of arguments containing the number to be printed.
 *
 * Return: The number of characters printed.
 */
int print_number(va_list args)
{
    int n = va_arg(args, int);
    int printed_chars = 0;

    /* Check if the number is negative */
    int is_negative = 0;
    if (n < 0) {
        is_negative = 1;
        n = -n;
        _putchar('-');
        printed_chars++;
    }

    /* Convert the number to string */
    char num_str[12];  // Assuming maximum 12 digits for an integer
    int num_len = snprintf(num_str, sizeof(num_str), "%d", n);

    /* Print leading spaces if necessary */
    int field_width = 6;  // Example field width value
    if (num_len < field_width) {
        int num_spaces = field_width - num_len;
        for (int i = 0; i < num_spaces; i++) {
            _putchar(' ');
            printed_chars++;
        }
    }

    /* Print the number */
    for (int i = 0; i < num_len; i++) {
        _putchar(num_str[i]);
        printed_chars++;
    }

    return printed_chars;
}
