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
	int len = 0;
	char *str;

	if (format == NULL)
		return (-1);

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

			break;
		default:
			_putchar(format[c]);
			_putchar(format[c + 1]);
			len += 2;
			break;
	}
	return (len);
}
