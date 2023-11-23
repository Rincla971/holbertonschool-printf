#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _printf - Produces output according to a format.
 * @format: The format string.
 *
 * Return: The number of characters printed (excluding the null byte used
 *         to end output to strings).
 */
int _printf(const char *format, ...)
{
    va_list ap;
    va_start(ap, format);

    while (*format != '\0')
    {
        if (*format == '%')
        {
            ++format;
            if (*format == 'c')
            {
                char lettre = va_arg(ap, int);
                _putchar(lettre);
            }
            else if (*format == 's')
            {
                char *string = va_arg(ap, char*);
                while (*string != '\0')
                {
                    _putchar(*string);
                    string++;
                }
            }
            else if (*format == '%')
            {
                _putchar('%');
            }
            else
            {
                _putchar('%');
                _putchar(*format);
            }
        }
        else
        {
            _putchar(*format);
        }

        ++format;
    }

    va_end(ap);
    return 0; /* Modifier la valeur de retour selon vos besoins */
}

