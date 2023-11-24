#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * print_char - Prints a character to standard output.
 *
 * @ap: A va_list containing the format specifier arguments.
 *
 * This function is used in the custom implementation of printf to handle
 * the format is '%s', indicating the desire to print a string.
 *
 * Returns: The result of the putchar function.
 */

void print_string(va_list ap)
{
	char *string = va_arg(ap, char*);

	while (*string)
	{
		putchar(*string);
		string++;
	}
}
