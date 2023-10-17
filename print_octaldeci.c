#include "main.h"

/**
 * print_octal - Print an unsigned integer in octal.
 * @argument: Argument to print.
 *
 * Return: Number of chars printed.
 */
int print_octal(va_list argument)
{
	unsigned int uint_arg = va_arg(argument, unsigned int);
	char octal_str[12];

	snprintf(octal_str, sizeof(octal_str), "%o", uint_arg);
	return (write(1, octal_str, strlen(octal_str)));
}
