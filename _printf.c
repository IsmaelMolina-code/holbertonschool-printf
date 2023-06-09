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
	int count = 0;

	if (format == NULL || !format)
		return (-1);

	va_start(args, format);

	count = cases_func((char *) format, args);

	va_end(args);
	return (count);
}

/**
 * cases_func - the main function that do like printf
 *
 * @format: char of the printf
 *
 * @args: argument list
 *
 * Return: count
 */

int cases_func(char *format, va_list args)
{
	int count = 0;

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case '\0':
					return (-1);
				case 'c':
					count += print_char(args);
					break;
				case 's':
					count += print_string(args);
					break;
				case '%':
					count += print_perc(args);
					break;
				case 'i':
					count += print_i(args, va_arg(args, int));
					break;
				case 'd':
					count += print_d(args);
					break;
				default:
					count += print_unknown(format[-1]);
					count += print_unknown(format[0]);
					break;
			}
		}
		else
			count += write(1, format, 1);
		format++;
	}
	return (count);
}

/**
 * print_i - prints integer
 *
 * @args: list of arg
 *
 * @n: integer to printeded
 * Return: int
 */

int print_i(va_list args, int n)
{
	int i = 0;
	unsigned int aux;

	if (n == INT_MIN)
	{
		write(1, "-", 1);
		i++;
		aux = -(unsigned int)INT_MIN;
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		i++;
		aux = -n;

	}
	else
	{
		aux = n;
	}

	if (aux / 10)
	{
		i += print_i(args, aux / 10);
	}

	_putchar((aux % 10) + '0');
	i++;

	return (i);
}

/**
 * print_d - prints decimal int
 *
 * @args: list of arg
 *
 * Return: decimal int
 */

int print_d(va_list args)
{
	long int d = va_arg(args, long int);

	return (print_i(args, d));
}
