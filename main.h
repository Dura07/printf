#ifndef MAIN_H
#define MAIN_H
#include <stadarg.h>

typedef struct format
{
	char *id;
	int (*f)();
} match;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list val);
int printf_string(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);
int print_37(void);

#endif
