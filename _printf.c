#include "holberton.h"
/**
* _printf - formats text
* @format: first argument, always a string
*
* Return: number of characters
*/
int _printf(const char *format, ...)
{
	int i, n = 0;
	va_list valist;
	int *m = &i;

	va_start(valist, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				n = n + _putchar('%');
				i++;
			}
			else
				n = n + op_parse(format, m, valist);
		}
		else
			n = n + _putchar(format[i]);
	}
	va_end(valist);
	return (n);
}
