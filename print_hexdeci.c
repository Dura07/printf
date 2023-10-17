#include "main.h"

/**
 * print_hex - Print an unsigned integer in lowercase hexadecimal.
 * @argument: Argument to print.
 *
 * Return: Number of chars printed.
 */
int print_hex(va_list argument)
{
	unsigned int uint_arg = va_arg(argument, unsigned int);
	char hex_str[12];

	snprintf(hex_str, sizeof(hex_str), "%x", uint_arg);
	return (write(1, hex_str, strlen(hex_str)));
}
