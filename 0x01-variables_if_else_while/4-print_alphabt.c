#include <stdio.h>

/**
 * main - print all letters
 * execpt q and e
 *
 * Return: 0 always as success
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
	if (c != 'e' && c != 'q')
	{
		putchar(c);
	}
	c += 1;
	}
	putchar('\n');
	return (0);
}
