#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
   * print_char - Prints a character to standard output.
   *
   * @ap: A va_list containing the format specifier arguments.
   *
   * This function is used in the custom implementation of printf to handle 
   * the format is '%c', indicating the desire to print a character.
   *
   * Returns: The result of the putchar function.
   */
void print_char(va_list ap)
{
	char letter = va_arg(ap, int);/* Retrieve character of argument list */
	putchar(letter);/* Print the character */
}
