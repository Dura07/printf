#ifndef MAIN_H
#define MAIN_H



#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <stddef.h>
#include <string.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_integer(va_list argument);
int print_string(va_list argument);
int print_char(va_list argument);
int print_binary(va_list argument);
int print_unsigned_int(va_list argument);
int print_octal(va_list argument);
int print_hex(va_list argument);
int print_hex_upper(va_list argument);
int print_custom_string(va_list argument);

#endif
