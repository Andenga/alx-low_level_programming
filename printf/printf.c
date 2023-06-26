#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to be written.
 *
 * Return: On success, the number of characters written.
 * On error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _printf - Prints output according to a format.
 * @format: The format string.
 *
 * Return: The number of characters printed (excluding the null byte used to
 * end output to strings).
 */
int _printf(const char *format, ...)
{
	int printed_chars = 0;
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
		{
			_putchar(*format);
			printed_chars++;
		}
		else
		{
			format++;

			/* Check for flag characters */
			 int flag_plus = 0; 
			int flag_space = 0;
			int flag_hash = 0;

			while (*format == '+' || *format == ' ' || *format == '#')
			{
				if (*format == '+')
					flag_plus = 1;
				else if (*format == ' ')
					flag_space = 1;
				else if (*format == '#')
					flag_hash = 1;

				format++;
			}

			/* Handle conversion specifier */
			switch (*format)
			{
				case 'c':
					{
						int c = va_arg(args, int);
						_putchar(c);
						printed_chars++;
						break;
					}
				case 's':
					{
						char *str = va_arg(args, char *);
						if (str == NULL)
							str = "(null)";
						while (*str)
						{
							_putchar(*str);
							str++;
							printed_chars++;
						}
						break;
					}
				case 'd':
				case 'i':
					{
						int n = va_arg(args, int);
						if (n < 0)
						{
							_putchar('-');
							printed_chars++;
							n = -n;
						}
						printed_chars += print_number(n);
						break;
					}
				case 'u':
					{
						unsigned int u = va_arg(args, unsigned int);
						printed_chars += print_unsigned(u);
						break;
					}
				case 'o':
					{
						unsigned int o = va_arg(args, unsigned int);
						printed_chars += print_octal(o);
						break;
					}
				case 'x':
					{
						unsigned int x = va_arg(args, unsigned int);
						printed_chars += print_hex(x, 0);
						break;
					}
				case 'X':
					{
						unsigned int X = va_arg(args, unsigned int);
						printed_chars += print_hex(X, 1);
						break;
					}
				default:
					_putchar('%');
					_putchar(*format);
					printed_chars += 2;
					break;
			}
		}

		format++;
	}

	va_end(args);

	return printed_chars;
}
