#include "main.h"

/**
 * print_rev - a function that prints a string
 * in reverse.
 * @s: the string
 */

void print_rev(char *s)
{
	char n;
	int i = 0;

	while (n != '\0')
	{
		n = s[i];
		i++;
	}
	i--;
	while (i >= 1)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}
