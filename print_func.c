#include "main.h"

/**
 * print_char - Print a character.
 * @argument: Argument to print.
 *
 * Return: Number of chars printed.
 */

int print_char(va_list argument)
{
	char char_arg = va_arg(argument, int);

	return (write(1, &char_arg, 1));
}

/**
 * print_string - Print the string.
 * @argument: Argument to print.
 *
 * Return: Number of chars printed.
 */

int print_string(va_list argument)
{
	char *str_arg = va_arg(argument, char *);
	int printed_chars = 0;

	if (str_arg == NULL)
		str_arg = "(null)";
	while (*str_arg)
	{
		printed_chars += write(1, str_arg, 1);
		str_arg++;
	}
	return (printed_chars);
}
