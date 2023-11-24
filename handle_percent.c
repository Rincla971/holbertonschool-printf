#include "main.h"

/**
* handle_percent - Handles the '%%' format specifier (double percent)
* @void: Function doesn't take any arguments
* Description: This function prints a percent
* Return: Number of characters printed
*/
int handle_percent(void)
{
    /* On print le char '%' dans stdout*/
	write(1, "%", 1);
    /* On retourne le nombre de caractères printed*/
    /* Ça sera toujours 1 car on print un seul '%'*/
	return (1);
}
