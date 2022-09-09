#include <stdio.h>

/**
 * main - prints all possible combo
 * of single digit numbers
 *
 * Return: 0 always
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i += 1)
	{
		putchar((i % 10) + '0');
		if (i == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar ('\n');
		return (0);
}
