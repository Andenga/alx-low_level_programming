#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_string - Prints a string with precision.
 * @args: The list of arguments containing the string to be printed.
 *
 * Return: The number of characters printed.
 */
int print_string(va_list args)
{
    char *str = va_arg(args, char *);
    int precision = va_arg(args, int);
    int printed_chars = 0;

    /* Check if precision is valid */
    if (precision < 0)
        precision = 0;

    /* Calculate the length of the string */
    int str_len = strlen(str);

    /* Adjust the length based on precision */
    if (precision > 0 && precision < str_len)
        str_len = precision;

    /* Print the string */
    for (int i = 0; i < str_len; i++) {
        _putchar(str[i]);
        printed_chars++;
    }

    return printed_chars;
}
