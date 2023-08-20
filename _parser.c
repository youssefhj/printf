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
	char *str;

	if (format == NULL)
		return (-1);

	for (c = 0, len = 0 ; format[c] != '\0' ; c++)
	{
		if (format[c] == '%' && format[c + 1] != '\0')
		{
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
			len += _format(format[c + 1], ptr);
			c++;

		} else if (format[c] != '\0')
		{

			_putchar(format[c]);
			len++;
		}
	}
	return (len);
}
