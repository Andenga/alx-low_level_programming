#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_number - Prints a number (integer) with the 0 flag character.
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

    /* Print leading zeros if necessary */
    int field_width = 6;  // Example field width value
    if (num_len < field_width) {
        int num_zeros = field_width - num_len;
        for (int i = 0; i < num_zeros; i++) {
            _putchar('0');
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

/**
 * print_string - Prints a string with the 0 flag character.
 * @args: The list of arguments containing the string to be printed.
 *
 * Return: The number of characters printed.
 */
int print_string(va_list args)
{
    char *str = va_arg(args, char *);
    int printed_chars = 0;

    /* Print the string */
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32 || str[i] >= 127) {
            _putchar('\\');
            _putchar('x');
            printed_chars += 2;
            printed_chars += print_hex_upper_char((unsigned char) str[i]);
        } else {
            _putchar(str[i]);
            printed_chars++;
        }
    }

    return printed_chars;
}
