#include <stdarg.h>
#include <unistd.h>

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
	int printed_chars = 0;

	va_start(argument, format);


	while (format && format[numeric_count])
	{
		if (format[numeric_count] == '%')
		{
			numeric_count++;
			if (format[numeric_count] == 'c')
			{
				char char_arg = va_arg(argument, int);

				printed_chars += write(1, &char_arg, 1);
			}
			else if (format[numeric_count] == 's')
			{
				char *str_arg = va_arg(argument, char *);

				while (*str_arg)
				{
					printed_chars += write(1, str_arg, 1);
					str_arg++;
				}
			}
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
