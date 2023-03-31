#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * struct Conversion - the structure
 *
 * @specifier: the spec char
 *
 * @func: function pointer
 */

typedef struct Conversion
{
        char specifier;
        int (*func)(va_list);
}Conversion;
	char specifier;
	int (*func)(va_list);
} Conversion;

int _putchar(char c);
int _printf(const char *format, ...);

