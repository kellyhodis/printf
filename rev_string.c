#include "holberton.h"
/**
* rev_string - prints a string in reverse followed by a newline
* @valist: variadic function input
* Return: number of characters printed
*/
int rev_string(va_list valist)
{
char swap;
char *s, *str;
int k, i, j;

s = va_arg(valist, char*);
	if (!s)
		s = "(null)";
	for (j = 0; s[j] != '\0'; j++)
		;
	str = malloc(sizeof(char) * j);
	for (k = 0; s[k] != '\0'; k++)
		str[k] = s[k];
	str[k] = '\0';
	j = j - 1;
	for (i = 0; i <= j; i++, j--)
	{
		swap = str[i];
		str[i] = str[j];
		str[j] = swap;
	}
	for (k = 0; str[k] != '\0'; k++)
	{
		_putchar(str[k]);
	}
	free(str);
	return (k);
}
