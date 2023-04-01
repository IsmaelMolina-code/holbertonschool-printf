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

int print_i(va_list args, long int n);
int print_d(va_list args);
int print_string(va_list args);
int print_perc(va_list args);
int print_char(va_list args);
int print_unknown(char c);
int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(const char *s);

#endif
