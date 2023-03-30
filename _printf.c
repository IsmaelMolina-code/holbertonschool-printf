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
	{'\0', NULL}
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
		}
		else
		{
			_putchar(*format);
			count++;
		}

	format++;
	}
	va_end(args);

	return (count);
}
