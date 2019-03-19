#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
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
void print_string(va_list valist);
void print_char(va_list valist);
void print_int(long int n);
void get_num(va_list valist);

#endif
