#include "holberton.h"
/**
* print_char - prints a char
* @c: character to print
*
* Return: nothing
*/
void print_char(va_list valist)
{
	int c;
	c = va_arg(valist, int);
	_putchar(c);
}
