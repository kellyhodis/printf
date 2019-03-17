#include "holberton.h"
/**
* print_char - formats a char
* @c: character to format
*
* Return: nothing
*/
void print_char(va_list valist)
{
	int c;
	c = va_arg(valist, int);
	_putchar(c);
}
