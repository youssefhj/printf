#include "main.h"

/**
 * token_o - display the ocatl format
 * @ptr: pointer to list of argument
 * @len: length of diplay
 *
 * Return: void
 */
void token_o(va_list ptr, int *len)
{
	unsigned int ui;

	ui = va_arg(ptr, unsigned int);

	_display_octal(ui, len);
}
