#include "holberton.h"
/**
* get_num - gets argument from valist and creates an int
* @valist: argument from _printf variadic function
*
* Return: nothing
*/
int get_num_u(va_list valist)
{
	int n;

	/* initializes n as an argument from valist */
	n = va_arg(valist, int);

	/* calls function to print the number */

	print_int_u(n);

	return (0);
}

