#include "main.h"

/**
 * print_integer - Print an integer.
 * @argument: Argument to print.
 *
 * Return: Number of chars printed.
 */

int print_integer(va_list argument)
{
	int int_arg = va_arg(argument, int);
	char int_str[12];

	snprintf(int_str, sizeof(int_str), "%d", int_arg);
	return (write(1, int_str, strlen(int_str)));
}
