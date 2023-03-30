#include "main.h"

int print_char(va_list args)
{
	char c = (char) va_arg(args, int);
	_putchar(c);
	return (1);
}

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
	return _strlen(s);
}

int print_perc(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
