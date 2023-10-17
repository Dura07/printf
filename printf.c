#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Output format.
 * @format: Format string.
 *
 * Return: Number of characters to be printed.
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
			{
				char char_arg = va_arg(argument, int);

				printed_chars += write(1, &char_arg, 1);
			}
			else if (format[numeric_count] == 's')
			{
				char *str_arg = va_arg(argument, char *);

				if (str_arg)
				{
					int len = 0;

					while (str_arg[len])
						len++;
					printed_chars += write(1, str_arg, len);
				}
				else
					printed_chars += write(1, "(null)", 6);
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
