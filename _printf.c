#include "holberton.h"
/**
* _printf - formats text
* @format: first argument, always a string
*
* Return: number of characters
*/
int _printf(const char *format, ...)
{
	op_t array[] = {
		{'s', print_string},
		{'c', print_char},
		{'i', get_num},
		{'d', get_num},
		{'\0', NULL}
	};
	int i, j, n = 0;
	va_list valist;

	va_start(valist, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				n = -1;
			}
			else
			{
				for (j = 0; array[j].c != '\0'; j++)
				{
					if (format[i + 1] == array[j].c)
					{
						array[j].f(valist);
						i++;
						break;
					}
				}
				if (array[j].c == '\0')
					_putchar(format[i]);
			}
			
		}
		else
			_putchar(format[i]);
	}
	va_end(valist);

	return (i + n);
}
