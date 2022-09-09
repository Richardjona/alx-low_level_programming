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

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
	}
	putchar('\n');
	return (0);
}
