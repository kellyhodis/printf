#include "holberton.h"

/**
* print_string - prints a string
*
* @valist: argument from _printf
*
* Return: number of characters
*/

int print_string(va_list valist)
{
	int i;
	char *s;

	s = va_arg(valist, char*);
	if (!s)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}
