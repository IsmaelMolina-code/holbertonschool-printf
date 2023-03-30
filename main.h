#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(const char *s);
int print_char(va_list args);
int print_string(va_list args);
int print_perc(va_list args);

#endif /* MAIN_H */
