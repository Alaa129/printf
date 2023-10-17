#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

int _printf(const char *format, ...);
int switch_case(const char *format, va_list args);
int putchar_string(va_list args);
int custom_putchar(va_list args);
int custom_int(va_list args);
int custom_precent(void);
int _putchar(char c);

#endif
