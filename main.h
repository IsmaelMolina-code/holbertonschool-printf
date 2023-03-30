#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

typedef struct Conversion
{
        char specifier;
        int (*func)(va_list);
}Conversion;

int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(const char *s);
int print_char(va_list args);
int print_string(va_list args);
int print_perc(va_list args);

#endif /* MAIN_H */
