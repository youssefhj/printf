#include "main.h"

/**
 * token_u - display an unsigned integer
 * @ptr: pointer to list of argument
 * @len: length of diplay
 *
 * Return: void
 */
void token_u(va_list ptr, int *len)
{
	unsigned int ui;

	ui = va_arg(ptr, unsigned int);
	_display_u_number(ui, len);
}
