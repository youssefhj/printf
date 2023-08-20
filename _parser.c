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
		if (c == '%' && format[c + 1] != '\0')
		{
			switch (c + 1)
			{
				case 'c':
					_putchar((char)av_arg(ptr, int));
					c += 2;
					len++;
					break;

				case 's':
					char *str = av_arg(ptr, char*);

					while (*str)
					{
						len++
						_putchar(str++);
					}
					c += 2;
					break;
				default:
					_putchar(format[c]);
					_putchar(format[++c]);
					break;
			}

		} else if (format[c] != '\0')
		{

			_putchar(format[c]);
			len++;
		}
	}
	return (len);
}
