#include "holberton.h"

void print_string(va_list valist)
{
	int i;
	char *s;
	s = va_arg(va_list, char*);

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
}
