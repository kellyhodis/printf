#include "holberton.h"
/**
* get_u - gets argument from valist and creates an int
* @valist: argument from _printf variadic function
*
* Return: number of digits
*/
int get_u(va_list valist)
{
	int n, k;

	/* initializes n as an argument from valist */
	n = va_arg(valist, int);

	k = get_length_i(n);

	if (n <= 0)
		k++;
	/* calls function to print the number */
	print_u(n);

	return (k);
}
