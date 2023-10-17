#include "main.h"

/**
 * print_binary - Print an unsigned integer in binary.
 * @argument: Argument to print.
 *
 * Return: Number of chars printed.
 */
int print_binary(va_list argument)
{
	unsigned int uint_arg = va_arg(argument, unsigned int);
	int printed_chars = 0;
	char binary_str[32];
	int i = 0;

	if (uint_arg == 0)
	{
		printed_chars += write(1, "0", 1);
		return (printed_chars);
	}

	while (uint_arg > 0)
	{
		binary_str[i] = (uint_arg & 1) + '0';
		uint_arg >>= 1;
		i++;
	}

	while (i > 0)
	{
		i--;
		printed_chars += write(1, &binary_str[i], 1);
	}

	return (printed_chars);
}
