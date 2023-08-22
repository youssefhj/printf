#include "main.h"

/**
 * token_c - display the caracter
 * @ptr: pointer to list of argument
 * @len: length of diplay
 *
 * Return: void
 */
void token_c(va_list ptr, int *len)
{
	char c;

	c = (char)va_arg(ptr, int);
	_putchar(c);
	(*len)++;
}
