#include "main.h"

/**
 * _format - all format exist
 * @format: format string
 * @c: position of a caracter in format
 * @ptr: pointer to the arguments list
 *
 * Return: the len of displayed caracter
 */
int _format(const char *format, int c, va_list ptr)
{
	int len, num;
	char *str;

	if (format == NULL)
		return (-1);

	len = 0;
	switch (format[c + 1])
	{
		case 'c':
			_putchar((char)va_arg(ptr, int));
			len++;
				break;

		case 's':
			str = va_arg(ptr, char*);

			while (*str)
			{
				_putchar(*str++);
				len++;
			}
			break;

		case '%':
			_putchar('%');
			len++;
			break;

		case 'd':
		case 'i':
			num = va_arg(ptr, int);
			if (num < 0)
			{
				_putchar('-');
				num *= -1;
				len++;
			}
			if (num == 0)
			{
				_putchar ('0');
				len++;
			}
			else
			{
				_display_number(num, &len);
			}
			break;
		default:
			_putchar(format[c]);
			_putchar(format[c + 1]);
			len += 2;
			break;
	}
	return (len);
}
