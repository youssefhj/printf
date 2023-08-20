#include "main.h"

/**
 * _parser - parse a given string
 * @format: string to parse
 * @ptr: pointer to the parameter list
 *
 * Return: len of written string
 */
int _parser(const char *format, va_list ptr)
{
	int c, len;

	if (format == NULL)
		return (-1);

	for (c = 0, len = 0 ; format[c] != '\0' ; c++)
	{
		if (format[c] == '%' && format[c + 1] != '\0')
		{
			len += _format(format, c, ptr);
			c++;

		} else if (format[c] != '\0')
		{

			_putchar(format[c]);
			len++;
		}
	}
	return (len);
}
