#include "main.h"

/**
 * _putchar - put c into standard ouput
 * @c: caracter
 *
 * Return: len of what was written
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
