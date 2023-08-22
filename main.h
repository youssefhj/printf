#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct Token - Token structure
 * @s: the token
 * @f: pointer to function
 *
 * Description: Token structure
 */
struct Token
{
	char *s;
	void (*f)(va_list, int *);
};

/**
 * Token - typedef for struct Token
 */
typedef struct Token Token;

int _printf(const char *, ...);
int _parser(const char *, va_list);

void token_c(va_list, int *);
void token_s(va_list, int *);
void token_i_d(va_list, int *);
void token_b(va_list, int *);
void token_u(va_list, int *);
void token_o(va_list, int *);
void token_x(va_list, int *);
void token_X(va_list, int *);

int _putchar(char);
void _display_number(int, int *);
void _display_u_number(unsigned int, int *);
void _display_binary(unsigned int, int *);
void _display_octal(unsigned int, int *);
void _display_hex_x(unsigned int, int *);
void _display_hex_X(unsigned int, int *);

#endif
