#include "holberton.h"

/**
* get_b - gets argument from valist and creates an int
* @valist: argument from _printf variadic function
*
* Return: number of digits
*/

int get_b(va_list valist)
{
	int n, k, b;

	n = va_arg(valist, int);

	b = convert_b(n);

	k = get_length_i(b);

	if (b <= 0)
		k++;
	/* calls function to print the number */
	print_b(b);

	return (k);
}
