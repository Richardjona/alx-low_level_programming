#include <stdio.h>

/**
 * main - a programm that prints
 * single digits of base 10 from 0
 *
 * Return: 0 always
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n += 1)
		printf("%d", n);
	printf("\n");
	return (0);
}
