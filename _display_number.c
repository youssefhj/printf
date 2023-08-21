#include "main.h"

/**
 * _dispaly_number - display number
 * @num: number
 * @len: pointer to an int
 *
 * Return: void
 */
void _display_number(int num, int *len)
{
	if (num <= 0)
		return;

	_display_number(num / 10, len);
	num = num % 10;
	_putchar(num + '0');
	(*len)++;

}
