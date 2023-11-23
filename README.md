GENERAL

PRINTF


DESCRIPTION PRINTF:

The C library function int printf(const char *format, ...) sends formatted output to stdout.

EXAMPLE: 

printf(format, arg1, arg2, ...);


format: A format string that specifies the layout of the data to display.

arg1, arg2, ...: The arguments that will be formatted and displayed based on the format string.

HOW TO CREATE OUR OWN FUNCTION PRINTF IN LANGAGE C

WE NEED USE MAIN THE LIBRARY <stdarg.h> in order to define macros that allow you to access arguments in functions with variable-length argument lists:

va_arg() , va_copy() , va_start() et va_end() 

THE DIFFERENTS FORMAT THAT OUR _PRINTF USE AND PRINT WILL BE:

%c FORMAT FOR THE ISOLATED CHARACTER = char
%d FORMAT FOR THE NUMERIC SHORT = int
%e FORMAT FOR FLOATING POINT VALUE IN SCIENTIFIC NOTATION WITH e = float, double%f FORMAT FOR VALUE IN DECIMAL NOTATION = float, double
%s FORMAT FOR STRING CHAIN = char*
%ld FORMAT FOR NUMERIC LONG INTEGER = long int
%p FORMAT FOR MEMORY ADDRESS IN HEXADECIMAL = *pointeur
%% FORMAT FOR PERCENTAGE = %

