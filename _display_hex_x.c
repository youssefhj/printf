#include "main.h"

/**
 * _display_hex_x - display ui to lower hex format
 * @ui: positive number
 * @len: length
 *
 * Return: void
 */
void _display_hex_x(unsigned int ui, int *len)
{
	if (ui == 0)
		return;

	_display_hex_x(ui / 16, len);
	if (ui % 16 == 0)
	{
		_putchar('0');
		(*len)++;
	}
	else if (ui % 16 == 10)
	{
		_putchar('a');
		(*len)++;
	}
	else if (ui % 16 == 11)
	{
		_putchar('b');
		(*len)++;
	}
	else if (ui % 16 == 12)
	{
		_putchar('c');
		(*len)++;
	}
	else if (ui % 16 == 13)
	{
		_putchar('d');
		(*len)++;
	}
	else if (ui % 16 == 14)
	{
		_putchar('e');
		(*len)++;
	}
	else if (ui % 16 == 15)
	{
		_putchar('f');
		(*len)++;
	}
	else
		_display_u_number(ui % 16, len);
}
