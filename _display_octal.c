#include "main.h"

/**
 * _display_octal - display ui to octal format
 * @ui: positive number
 * @len: length
 *
 * Return: void
 */
void _display_octal(unsigned int ui, int *len)
{
	if (ui == 0)
		return;

	_display_octal(ui / 8, len);
	if (ui % 8 == 0)
	{
		_putchar('0');
		(*len)++;
	}
	else
		_display_u_number(ui % 8, len);
}
