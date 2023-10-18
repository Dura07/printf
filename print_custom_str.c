#include "main.h"

/**
 * print_custom_string - Print a string when leaving non-printable chars.
 * @argument: Argument to print.
 *
 * Return: Number of chars to be printed.
 */

int print_custom_string(va_list argument)
{
	char *str_arg = va_arg(argument, char *);
	int printed_chars = 0;
	char hex[5];

	if (str_arg == NULL)
	str_arg = "(null)";
	while (*str_arg)
	{
	if ((*str_arg >= 32 && *str_arg < 127) || *str_arg < 0)
	{
	printed_chars += write(1, str_arg, 1);
	}

	else

	{

	snprintf(hex, sizeof(hex), "\\x%02X", (unsigned char)*str_arg);
		    printed_chars += write(1, hex, 4);
	}
	str_arg++;
	}
	return (printed_chars);
}
