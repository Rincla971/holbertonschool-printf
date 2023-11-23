#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	char lettre;  /* Declaration and initialization for character */
	char *string; /* Declaration and initialization for string */
	char pcent;   /* Declaration and initialization for percentage */
	va_list ap;   /* Special type in C that manipulates the list of arguments */

	va_start(ap, format); /* Initialize the list to start working with a list of arguments */

	while (*format != '\0') /* Loop to iterate through each character of the format string */
	{
		if (*format == '%') /* Check if the current character is '%' */
		{
			++format;
			if (*format == 'c') /* If the format specifier is 'c' */
			{
				lettre = va_arg(ap, int); /* Retrieve the character argument */
				putchar(lettre); /* Print the character using putchar */
			}
			else if (*format == 's') /* If the format specifier is 's' */
			{
				string = va_arg(ap, char*); /* Retrieve the string argument */
				while (*string)
				{
					putchar(*string); /* Print each character of the string using putchar */
					string++;
				}
			}
			else if (*format == '%') /* If the format specifier is '%' */
			{
				pcent = '%';
				putchar(pcent); /* Print the percentage using putchar */
			}
			else
			{
				putchar(*format); /* Print the character without format specifier */
			}
		}
		else
		{
			putchar(*format); /* Print the character without format specifier */
		}
		++format;
	}
	va_end(ap); /* end the processing of optional arguments */
	return 0; /* return value, modify according to your needs */
}
