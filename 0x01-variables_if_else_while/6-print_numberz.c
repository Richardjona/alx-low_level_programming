#include <stdio.h>

/**
 * main - a programme that prints base 10
 * digits without using char
 *
 * Return: 0 always for success
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i += 1)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
