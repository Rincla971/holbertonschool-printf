#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

/*Task 0*/
int _printf(const char *format, ...);
int handle_character(va_list arguments_list);
int handle_string(va_list arguments_list);
int handle_percent(void);
/*Task 1*/
int handle_integer(va_list arguments_list);
/*Handle all format*/
int handle_format(char format, va_list arguments_list);

#endif
