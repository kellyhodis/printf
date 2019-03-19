#include "holberton.h"
/**
* op_parse - parses op_t and calls function pointer
* @format: points to location of format at current count
* @i: current index of format
* @valist: va_list parameter
*
* Return: count of characters
*/
int op_parse(const char *format, int *i, va_list valist)
{
	op_t array[] = {
		{'s', print_string},
		{'c', print_char},
		{'i', get_num},
		{'d', get_num},
		{'u', get_num_u},
		{'\0', NULL}
		};
	int j, n = 0;

	for (j = 0; array[j].c != '\0'; j++)
	{
		if (format[*i + 1] == array[j].c)
		{
			n += array[j].f(valist);
			*i = *i + 1;
			break;
		}
		if (array[j].c == '\0')
			n += _putchar(format[*i]);
	}
	return (n);
}
