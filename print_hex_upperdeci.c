#include "main.h"

/**
 * print_hex_upper - Print an unsigned integer in uppercase hexadecimal.
 * @argument: Argument to print.
 *
 * Return: Number of characters printed.
 */

int print_hex_upper(va_list argument)
{
	unsigned int uint_arg = va_arg(argument, unsigned int);
	char hex_str[12];

	snprintf(hex_str, sizeof(hex_str), "%X", uint_arg);
	return (write(1, hex_str, strlen(hex_str)));
}
