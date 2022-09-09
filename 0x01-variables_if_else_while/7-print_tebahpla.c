#include <stdio.h>

/**
 * main - a program that prints
 * lowercase in reverse
 *
 * Return: 0 always
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
