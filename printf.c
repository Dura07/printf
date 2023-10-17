#include "main.h"

/**
 * _printf - Produces output according to a format.
 * @format: The format string.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;
	char *str_arg;
	char char_arg;

	va_start(args, format);

	while (format && format[count])
	{
	if (format[count] == '%')
	{
	count++;
	if (format[count] == 'c')
	{
	char_arg = va_arg(args, int);
	_putchar(char_arg);
	}
	else if (format[count] == 's')
	{
	str_arg = va_arg(args, char *);
	while (*str_arg)
	{
	_putchar(*str_arg);
	str_arg++;
	}
	}
	else if (format[count] == '%')
	{
	_putchar('%');
	}
	}
	else
	{
		_putchar(format[count]);
	}
	count++;
	}

	va_end(args);
	return (count);
}
