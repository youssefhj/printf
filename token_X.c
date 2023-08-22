#include "main.h"

/**
 * token_X - display the hex format
 * @ptr: pointer to list of argument
 * @len: length of diplay
 *
 * Return: void
 */
void token_X(va_list ptr, int *len)
{
	unsigned int ui;

	ui = va_arg(ptr, unsigned int);
	
	_display_hex_X(ui, len);
}
