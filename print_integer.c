#include "main.h"
#include <stdarg.h>
#include <string.h>
#include <stdio.h>

/**
 * print_integer - Handles the 'd' and 'i' format specifiers
 * @arguments_list: va_list containing the arguments
 * Return: number of characters printed
 */
int print_integer(va_list arguments_list)
{
	int len_integer;
	int integer = va_arg(arguments_list, int);

	char buffer[50];
	sprintf(buffer, "%d", integer);
	len_integer = strlen(buffer);

	write(1, buffer, len_integer);

	return (len_integer);
}
