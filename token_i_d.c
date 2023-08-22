#include "main.h"

/**
 * token_i_d - display an integer
 * @ptr: pointer to list of argument
 * @len: length of diplay
 *
 * Return: void
 */
void token_i_d(va_list ptr, int *len)
{
	int num;

	num = va_arg(ptr, int);
	if (num < 0)
	{
		_putchar('-');
		num *= -1;
		(*len)++;
	}
	if (num == 0)
	{
		_putchar ('0');
		(*len)++;
	}
	else
	{
		_display_number(num, len);
	}
}
