#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;
    va_start(args, format);
    while (*format != '\0')
    {
        if (*format == '%')
        {
        format++; /* Move past '%' */
            if (*format == 'c')
            {
                /* Print a character */
                putchar(va_arg(args, int));
                count++;
            }
            else if (*format == 's')
            {
                /* Print a string */
                char *str = va_arg(args, char *);
                while (*str != '\0')
                {
                    putchar(*str);
                    str++;
                    count++;
                }
            }
            else if (*format == '%')
            {
                /* Print a '%' character */
                putchar('%');
                count++;
            }
            else
            {
                /* Invalid format specifier, ignore and continue */
                putchar('%'); /* Print the '%' that was skipped */
                putchar(*format); /* Print the character after '%'*/
                count += 2;
            }
        }
        else
        {
            /* Normal character, print it */
            putchar(*format);
            count++;
        }
        format++;
    }
    va_end(args);
    return count;
}
