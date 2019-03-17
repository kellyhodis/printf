#include "holberton.h"

void get_num(va_list valist)
{
	int n;

	n = va_arg(valist, int);

	print_int(n);
}