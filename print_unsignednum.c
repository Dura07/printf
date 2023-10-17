#include "main.h"

/**
 * print_unsigned_int - Print an unsigned integer.
 * @argument: Argument to print.
 *
 * Return: Number of chars printed.
 */
int print_unsigned_int(va_list argument)
{
	unsigned int uint_arg = va_arg(argument, unsigned int);
	char uint_str[12];

	snprintf(uint_str, sizeof(uint_str), "%u", uint_arg);
	return (write(1, uint_str, strlen(uint_str)));
}
