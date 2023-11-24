#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * _printf - Custom printf function
 * @format: different format to meet
 *
 * Return: Number of char printed
 */

int _printf(const char *format, ...)
{
	va_list ap;
	va_start(ap, format);/* Init the list to start working list of arguments */
	while (*format != '\0')/* Loop to iterate each character of the format */
	{
		if (*format == '%')/* Check if the current character is '%' */
		{
			++format;
			if (*format == 'c')/* If the format specifier is 'c' */
			{
				print_char(ap);/* Retrieve the character argument */
			}
			else if (*format == 's')/* If the format specifier is 's' */
			{
				print_string(ap); /* Retrieve the string argument */
			}
			else if (*format == '%')/* If the format specifier is '%' */
			{
				print_percent();/* Print the percentage using putchar */
			}
			else
			{
				putchar(*format);/* Print character without format specifier */
			}
		}
		else
		{
			putchar(*format);/* Print character without format specifier */
		}
		++format;/*move to the next character in the format string */
	}
	va_end(ap);/* end the processing of optional arguments */
	return (0);
}
