#include "holberton.h"
/**
* _printf - prints text
* @print: first argument, always a string
*
* Return: nothing
*/
void _printf(const char * const print, ...)
{
	op_t array[] = {
		{'s', print_string},
		{'c', print_char},
		{'\0', NULL}
	};
	int i, j;
	va_list valist;

	va_start(valist, print);
	for (i = 0; print[i] != '\0'; i++)
	{
		if (print[i] == '%')
		{
			for (j = 0; array[j].c != NULL; j++)
			{
				if (print[i + 1] == array[j].c)
				{	
					array[j].f(valist);
					i++;
				}
			}
		}
		else
			_putchar(print[i]);
	}
	va_end(valist);
}
