#include "main.h"
#include "structs.c"

int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	int count = 0;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			for (int i = 0; i < sizeof(conversions) / sizeof(Conversion); i++)
			{
				if (*format == conversions[i].spec)
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
