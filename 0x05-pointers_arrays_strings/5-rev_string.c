#include "main.h"

/**
 * rev_string - function reverses string
 * @s: the string
 */

void rev_string(char *s)
{
	int len = 0;
	int i;
	/*iterate to find lenght of string and point to last char*/
	while (*s != '\0')
	{
		len++;
		++s;
	}
	/* back to character before null*/
	for (i = len; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
