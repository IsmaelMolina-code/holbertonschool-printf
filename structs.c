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
	char c = (char) va_arg(args, int);

	_putchar(c);
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

	if (s == NULL)
	{
		s = "(null)";
		write(1, s, 6);
		return (6);
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
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
