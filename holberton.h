#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
/**
* struct op - holds a data type and a function pointer
* @c: character that indicates data type
* @f: function pointer
*/
typedef struct op
{
	char c;
	int (*f)(va_list valist);
} op_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_string(va_list valist);
int print_char(va_list valist);
void print_int(int n);
int get_num(va_list valist);
int get_num_u(va_list valist);
void print_int_u(long int n);
int get_length_i(int n);
int op_parse(const char *format, int *i, va_list valist);

#endif

