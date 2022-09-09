#include <stdio.h>

/**
 * main - a programe that prints alphabet
 * in lower and upper case
 *
 * Return: 0 for success
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c += 1)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c += 1)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);



}
