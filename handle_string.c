#include "main.h"

/**
* handle_string - Handles the 's' format specifier (string)
* @arguments_list: Variable containing the arguments of variadic function
* Description: This function prints a string
* Return: Number of characters printed
*/
int handle_string(va_list arguments_list)
{
    /* Pointer string initialized avec le prochain argument en paramètre*/
	char *string = va_arg(arguments_list, char*);
    /* Variable len_string qui va strocker le nombre de char dans string*/
	int len_string;

    /* Error check : Si string est NULL alors on le remplace par "(null)"*/
	if (string == NULL)
		string = "(null)";

    /* On calcule le nombre de char dans string*/
    /* On attribue ce nombre à len_string*/
	len_string = strlen(string);

    /* On print string dans stdout*/
	write(1, string, len_string);

    /* On retourne le nombre de caractères printed/la longueur de string*/
	return (len_string);
}
