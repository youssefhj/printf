#include "main.h"

/**
 * token_b - display the binary
 * @ptr: pointer to list of argument
 * @len: length of diplay
 *
 * Return: void
 */
void token_b(va_list ptr, int *len)
{
	unsigned int ui;

	ui = va_arg(ptr, unsigned int);
	_display_binary(ui, len);
}
