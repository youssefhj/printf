#include "main.h"

/**
 * _printf - print in standart ouput
 * @format: string to print
 * @...: list of parameter
 *
 * Return: len of the string returned
 */
int _printf(const char *format, ...)
{
	int len;
	va_list ptr;

	if (format == NULL)
		return (-1);

	va_start(ptr, format);

	len = _parser(format, ptr);

	va_end(ptr);

	return (len);

}
