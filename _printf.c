#include "main.h"
#include "structs.c"
#include "aux_funcs.c"

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
	va_start(args, format);

	int count = 0, i;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			for (i = 0; i < sizeof(conversions) / sizeof(Conversion); i++)
			{
				if (*format == conversions[i].specifier)
				{
					count += conversions[i].func(args);
					break;
				}
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}

	format++;
	}
	va_end(args);

	return count;
}
