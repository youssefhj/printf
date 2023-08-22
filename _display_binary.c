#include "main.h"

/**
 * _display_binary - display ui to binary format
 * @ui: positive number
 * @len: length
 *
 * Return: void
 */
void _display_binary(unsigned int ui, int *len)
{
	if (ui == 0)
		return;

	_display_binary(ui / 2, len);
	_putchar((ui % 2) + '0');
	(*len)++;
}
