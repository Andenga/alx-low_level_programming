#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

/**
 * _printf - Produces output according to a format.
 * @format: The format string.
 *
 * Return: The number of characters printed (excluding the null byte used to end output to strings).
 */
int _printf(const char *format, ...)
{
    va_list args;
    int printed_chars = 0;
    int i = 0;

    va_start(args, format);

    while (format && format[i])
    {
        if (format[i] == '%')
        {
            i++;
            if (format[i] == '\0')
                break;
            else if (format[i] == '%')
            {
                _putchar('%');
                printed_chars++;
            }
            else if (format[i] == 'r')
            {
                char *str = va_arg(args, char *);
                int len = strlen(str);

                for (int j = len - 1; j >= 0; j--)
                {
                    _putchar(str[j]);
                    printed_chars++;
                }
            }
            else
            {
                _putchar('%');
                printed_chars++;

                if (format[i] != '\0')
                {
                    _putchar(format[i]);
                    printed_chars++;
                }
            }
        }
        else
        {
            _putchar(format[i]);
            printed_chars++;
        }

        i++;
    }

    va_end(args);

    return printed_chars;
}

/**
 * _putchar - Writes a character to the standard output.
 * @c: The character to be written.
 *
 * Return: On success, 1. On error, -1 is returned and errno is set appropriately.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}
