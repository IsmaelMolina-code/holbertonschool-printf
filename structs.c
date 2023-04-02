#include "main.h"

/**
 * print_unknown - prints a character preceded by '%' for unknown specifier
 *
 * @c: character '%'
 *
 * Return: the number of characters printed
 */

int print_unknown(char c)
{
	int count = 0;

	write(1, &c, 1);
	count++;

	return (count);
}

/**
 * print_char - prints a char
 *
 * @args: argument
 *
 * Return: one
 *
 */

int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * print_string - prints a string
 *
 * @args: argument
 *
 * Return: one
 *
 */

int print_string(va_list args)
{
	char *s = va_arg(args, char *);

	int len = 0, i = 0;

	if (!s)
		s = "(null)";

	for (; s[i]; i++)
	{
		if (s[i] == '%')
		{
			len += write(1, "%%", 1);
		}
		else
		{
			len += write(1, &s[i], 1);
		}
	}
	return (len);
}

/**
 * print_perc - prints a percentage
 *
 * @args: argument
 *
 * Return: one
 *
 */

int print_perc(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
