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

			/* Check for length modifiers */
			int length_modifier_long = 0;
			int length_modifier_short = 0;

			while (*format == 'l' || *format == 'h')
			{
				if (*format == 'l')
					length_modifier_long++;
				else if (*format == 'h')
					length_modifier_short++;

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
						if (length_modifier_long)
						{
							long int n = va_arg(args, long int);
							if (n < 0)
							{
								_putchar('-');
								printed_chars++;
								n = -n;
							}
							printed_chars += print_number((int)n);
						}
						else if (length_modifier_short)
						{
							int n = (short int)va_arg(args, int);
							if (n < 0)
							{
								_putchar('-');
								printed_chars++;
								n = -n;
							}
							printed_chars += print_number(n);
						}
						else
						{
							int n = va_arg(args, int);
							if (n < 0)
							{
								_putchar('-');
								printed_chars++;
								n = -n;
							}
							printed_chars += print_number(n);
						}
						break;
					}
				case 'u':
					{
						if (length_modifier_long)
						{
							unsigned long int n = va_arg(args, unsigned long int);
							printed_chars += print_unsigned((unsigned int)n);
						}
						else if (length_modifier_short)
						{
							unsigned int n = (unsigned short int)va_arg(args, unsigned int);
							printed_chars += print_unsigned(n);
						}
						else
						{
							unsigned int n = va_arg(args, unsigned int);
							printed_chars += print_unsigned(n);
						}
						break;
					}
				case 'o':
					{
						if (length_modifier_long)
						{
							unsigned long int n = va_arg(args, unsigned long int);
							printed_chars += print_octal((unsigned int)n);
						}
						else if (length_modifier_short)
						{
							unsigned int n = (unsigned short int)va_arg(args, unsigned int);
							printed_chars += print_octal(n);
						}
						else
						{
							unsigned int n = va_arg(args, unsigned int);
							printed_chars += print_octal(n);
						}
						break;
					}
				case 'x':
					{
						if (length_modifier_long)
						{
							unsigned long int n = va_arg(args, unsigned long int);
							printed_chars += print_hex((unsigned int)n, 0);
						}
						else if (length_modifier_short)
						{
							unsigned int n = (unsigned short int)va_arg(args, unsigned int);
							printed_chars += print_hex(n, 0);
						}
						else
						{
							unsigned int n = va_arg(args, unsigned int);
							printed_chars += print_hex(n, 0);
						}
						break;
					}
				case 'X':
					{
						if (length_modifier_long)
						{
							unsigned long int n = va_arg(args, unsigned long int);
							printed_chars += print_hex((unsigned int)n, 1);
						}
						else if (length_modifier_short)
						{
							unsigned int n = (unsigned short int)va_arg(args, unsigned int);
							printed_chars += print_hex(n, 1);
						}
						else
						{
							unsigned int n = va_arg(args, unsigned int);
							printed_chars += print_hex(n, 1);
						}
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

	return (printed_chars);
}

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 *
 * Return: The number of characters printed.
 */
int print_number(int n)
{
	int printed_chars = 0;

	if (n / 10)
		printed_chars += print_number(n / 10);

	_putchar(n % 10 + '0');
	printed_chars++;

	return (printed_chars);
}

/**
 * print_unsigned - Prints an unsigned integer.
 * @n: The unsigned integer to be printed.
 *
 * Return: The number of characters printed.
 */
int print_unsigned(unsigned int n)
{
	int printed_chars = 0;

	if (n / 10)
		printed_chars += print_unsigned(n / 10);

	_putchar(n % 10 + '0');
	printed_chars++;

	return (printed_chars);
}

/**
 * print_octal - Prints an unsigned integer in octal format.
 * @n: The unsigned integer to be printed.
 *
 * Return: The number of characters printed.
 */
int print_octal(unsigned int n)
{
	int printed_chars = 0;

	if (n / 8)
		printed_chars += print_octal(n / 8);

	_putchar(n % 8 + '0');
	printed_chars++;

	return (printed_chars);
}

/**
 * print_hex - Prints an unsigned integer in hexadecimal format.
 * @n: The unsigned integer to be printed.
 * @uppercase: Flag to indicate if uppercase letters should be used.
 *
 * Return: The number of characters printed.
 */
int print_hex(unsigned int n, int uppercase)
{
	int printed_chars = 0;
	char hex_digits[] = "0123456789abcdef";
	char hex_digits_upper[] = "0123456789ABCDEF";
	char *hex_ptr = uppercase ? hex_digits_upper : hex_digits;

	if (n / 16)
		printed_chars += print_hex(n / 16, uppercase);

	_putchar(hex_ptr[n % 16]);
	printed_chars++;

	return (printed_chars);
}
