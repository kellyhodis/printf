#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdlib.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct op
{
	char *c;
	void (*f)(va_list valist);
} op_t;

void _printf(const char * const print, ...);
int _putchar(char c);

#endif
