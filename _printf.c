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
		{NULL, NULL}
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
				if (string[i + 1] == array[j].c)
				{	
					array[j].f(valist);
					i++;
				}
			}
		}
		else
			/* print the character */

	}
	va_end(valist);
}
