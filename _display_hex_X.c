#include "main.h"

/**
 * _display_hex_X - display ui to upper hex format
 * @ui: positive number
 * @len: length
 *
 * Return: void
 */
void _display_hex_X(unsigned int ui, int *len)
{
	if (ui == 0)
		return;

	_display_hex_X(ui / 16, len);
	if (ui % 16 == 0)
	{
		_putchar('0');
		(*len)++;
	}
	else if (ui % 16 == 10)
	{
		_putchar('A');
		(*len)++;
	}
	else if (ui % 16 == 11)
	{
		_putchar('B');
		(*len)++;
	}
	else if (ui % 16 == 12)
	{
		_putchar('C');
		(*len)++;
	}
	else if (ui % 16 == 13)
	{
		_putchar('D');
		(*len)++;
	}
	else if (ui % 16 == 14)
	{
		_putchar('F');
		(*len)++;
	}
	else if (ui % 16 == 15)
	{
		_putchar('E');
		(*len)++;
	}
	else
		_display_u_number(ui % 16, len);
}
