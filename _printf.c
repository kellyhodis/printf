#include "holberton.h"
/**
* _formatf - formats text
* @format: first argument, always a string
*
* Return: nothing
*/
int _printf(const char *format, ...)
{
	op_t array[] = {
		{'s', format_string},
		{'c', format_char},
		{'\0', NULL}
	};
	int i, j;
	va_list valist;

	va_start(valist, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; array[j].c != '\0'; j++)
			{
				if (format[i + 1] == array[j].c)
				{	
					array[j].f(valist);
					i++;
				}
			}
		}
		else
			_putchar(format[i]);
	}
	va_end(valist);
}
