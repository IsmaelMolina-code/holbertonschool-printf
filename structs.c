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
	fputs(s, stdout);
	return _strlen(s);
}

int print_perc(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
