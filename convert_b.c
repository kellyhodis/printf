#include "holberton.h"

/**
 * convert_b - converts int to binary
 *
 * @n: integet to convert
 *
 * Return: converted number
 */

int convert_b(int n)
{
	if (n == 0)
		return (0);
	else
		return (n % 2 + 10 * convert_b(n / 2));
}
