#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdlib.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct op
{
	char c;
	void (*f)(va_list valist);
} op_t;

int _formatf(const char *format, ...);
int _putchar(char c);
void format_string(va_list valist);
void format_char(va_list valist);

#endif
