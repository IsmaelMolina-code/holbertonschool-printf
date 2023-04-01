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

	va_start(args, format);

	if (format == NULL || !format)
		return (-1);
	while (*format != '\0')
	{
	if (*format == '%')
	{
		format++;
		if (*format == '\0')
		{
			va_end(args);
			return (-1);
		}
		switch (*format)
		{
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
				break;
		}
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
	int aux;

	if (n < 0)
	{
		_putchar('-');
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
	int d = va_arg(args, int);

	return (print_i(args, d));
}
