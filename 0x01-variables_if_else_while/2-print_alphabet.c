#include <stdio.h>

/**
 * main - this programe prints alphabet
 * in lower case
 *
 * Return: 0 always
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch += 1)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
