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
	int c, t, len, is_defined_token;
	Token tokens[] = {
		{"c", token_c},
		{"s", token_s},
		{"i", token_i_d},
		{"d", token_i_d},
		{"b", token_b},
		{"u", token_u},
		{"o", token_o},
		{"x", token_x},
		{"X", token_X},
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);

	for (c = 0, len = 0 ; format[c] != '\0' ; c++)
	{
		if (format[c] == '%' && format[c + 1] != '\0')
		{
			is_defined_token = 0;
			for (t = 0 ; t < 9 ; t++)
			{
				if (format[c + 1] == tokens[t].s[0])
				{
					is_defined_token = 1;
					tokens[t].f(ptr, &len);
				}
			}
			if (is_defined_token == 0)
			{
				if (format[c + 1] == '%')
				{
					_putchar('%');
					len++;
				}
				else
				{
					_putchar(format[c]);
					_putchar(format[c + 1]);
					len += 2;
				}
			}
			c++;
		} else if (format[c] != '\0')
		{
			_putchar(format[c]);
			len++;
		}

	}
	return (len);
}
