#include "main.h"

/**
 * _printf - function that prints
 *
 * @format: String to print
 *
 * Return: the input to the function
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, i;
	Conversion conversions[] = {
	{'c', print_char},
	{'s', print_string},
	{'%', print_perc},
	{'\0', NULL},
	{'i', print_i_d},
	{'d', print_i_d}
	};
	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			if (*(format + 1) == '\0')
				return (-1);
			format++;
			for (i = 0; i < (int)(sizeof(conversions) / sizeof(Conversion)); i++)
			{
				if (*format == conversions[i].specifier)
				{
					count += conversions[i].func(args);
					break;
				}
			}
			format++;
			format--;
		}
		else
		{
			write(1, format, 1);
			count++;
		}
	format++;
	}
	va_end(args);
	return (count);
}

/**
 * print_i_d - Print an integer in decimal or binary format
 *
 * @args: list of arguments
 * @base: base to print the integer in (2 for binary, 10 for decimal)
 *
 * Return: number of characters printed
 */

int print_i_d(va_list args)
{
	int base;
	int n = va_arg(args, int);
	char buffer[64];
	char *p = &buffer[63];
	int negative = 0;
	static char digits[] = "0123456789abcdef";
	
	if ((n + 1) == 'i')
		base = 10;
	if ((n + 1) =='d')
		base = 2;
	*p = '\0';

	if (n < 0 && base == 10) {
	negative = 1;
		n = -n;
	}

	do {
	*--p = digits[n % base];
	n /= base;
        } while (n != 0);

	if (negative)
		*--p = '-';
	return write(1, p, 63);
}
