#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int _printf(const char *format, ...);
int _parser(const char *format, va_list ptr);
int _putchar(char c);
void _display_number(int num, int *len);
int _format(const char *format, int c, va_list ptr);

#endif
