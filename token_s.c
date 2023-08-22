#include "main.h"

/**
 * token_s - display the string
 * @ptr: pointer to list of argument
 * @len: length of diplay
 *
 * Return: void
 */
void token_s(va_list ptr, int *len)
{
	char *str;

	str = va_arg(ptr, char*);
	while (*str)
	{
		_putchar(*str++);
		(*len)++;
	}
}
