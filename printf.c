#include "main.h"

/**
 * _printf - Output formatted text.
 * @format: Format string.
 *
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
	int numeric_count = 0;
	va_list argument;
	int printed_chars = 0;

	va_start(argument, format);
	if (format == NULL)
		return (-1);

	while (format[numeric_count])
	{
		if (format[numeric_count] == '%')
		{
			numeric_count++;
			if (format[numeric_count] == 'c')
				printed_chars += print_char(argument);
			else if (format[numeric_count] == 's')
				printed_chars += print_string(argument);
			else if (format[numeric_count] == 'd' || format[numeric_count] == 'i')
				printed_chars += print_integer(argument);
			else if (format[numeric_count] == 'b')
				printed_chars += print_binary(argument);
			else if (format[numeric_count] == 'u')
				printed_chars += print_unsigned_int(argument);
			else if (format[numeric_count] == 'o')
				printed_chars += print_octal(argument);
			else if (format[numeric_count] == 'x')
				printed_chars += print_hex(argument);
			else if (format[numeric_count] == 'X')
				printed_chars += print_hex_upper(argument);
			else if (format[numeric_count] == '%')
				printed_chars += write(1, "%", 1);
		}
		else
			printed_chars += write(1, &format[numeric_count], 1);
		numeric_count++;
	}
	va_end(argument);
	return (printed_chars);
}
