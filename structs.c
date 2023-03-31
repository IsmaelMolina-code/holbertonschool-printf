#include "main.h"

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

	int i;

	if (s)
	{

		for (i = 0; s[i]; i++)
		{
			_putchar(s[i]);
		}
	}
	else
	{
		s = "(null)";
		write(1, s, 6);
	}

	return (_strlen(s));
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
