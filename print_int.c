#include "holberton.h"

/**
 * print_int - prints numbers
 *
 * @n: number to be printed
 *
 * Return: number of digits
 */

int print_int(long int n)
{

	/* checks if number has a negative sign and prints it */
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	/* checks if n is greater than 10 and calls function recursively if so*/
	if (n / 10)
		print_int(n / 10);
	/* prints number */

	_putchar((n % 10) + '0');

	return (n);
}
