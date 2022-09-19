#include "main.h"

/**
 * print_rev - a function that prints a string
 * in reverse.
 * @s: the string
 */

void print_rev(char *s);
{
	int strn = 0;
	int i;

	while (*s != '\0')
	{
		strn++
		++s;
	}
	for (i = strn; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
