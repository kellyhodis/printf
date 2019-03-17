#include "holberton.h"

/**
 * print_number - prints numbers
 *
 * @n: number to be printed
 */

void print_int(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print_int(n / 10);

	_putchar((n % 10) + '0');

}