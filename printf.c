#include "main.h"

/**
 * _printf - Produces output according to a format.
 * @format: The format string.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	int numeric_count = 0;
	va_list argument;
	char *str_arg;
	char char_arg;

	va_start(argument, format);

	while (format && format[numeric_count])
	{
	if (format[numeric_count] == '%')
	{
	numeric_count++;
	if (format[numeric_count] == 'c')
	{
		char_arg = va_arg(argument, int);
		_putchar(char_arg);
	}
	else if (format[numeric_count] == 's')
	{
	str_arg = va_arg(argument, char *);
	while (*str_arg)
	{
	_putchar(*str_arg);
	str_arg++;
	}
	}
	else if (format[numeric_count] == '%')
	{
	_putchar('%');
	}
	}
	else
	{
		_putchar(format[numeric_count]);
	}
	numeric_count++;
	}

	va_end(argument);
	return (numeric_count);
}
