#include "main.h"

/**
 * token_x - display the hex format
 * @ptr: pointer to list of argument
 * @len: length of diplay
 *
 * Return: void
 */
void token_x(va_list ptr, int *len)
{
	unsigned int ui;

	ui = va_arg(ptr, unsigned int);

	_display_hex_x(ui, len);
}
