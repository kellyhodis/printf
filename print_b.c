#include "holberton.h"

/**
 * print_b - prints numbers
 *
 * @n: number to be printed
 *
 * Return: number of digits
 */

void print_b(int n)
{

	if (n / 10)
		print_b(n / 10);
	/* prints number */

	_putchar((n % 10) + '0');
}
