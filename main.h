#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int _printf(const char *format, ...);
int _parser(const char *format, va_list ptr);
int _putchar(char c);
int _atoi(char *s);
int _fromat(char c, va_list ptr);

#endif
