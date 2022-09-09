#include <stdio.h>

/**
 * main - a programme that prints base 10
 * digits without using char
 *
 * Return: 0 always for success
 */
int main(void)
{
	int n;

	for (n = 38; n < 48; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
