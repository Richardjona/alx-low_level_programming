#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers
 * Return: 0 success
 */

int main(void)

{
	int count;
	int fifty = 50;
	long a = 1;
	long b = 2;

	for (count = 1; count <= (fifty / 2); count++)
	{
		printf("%li %li ", a, b);
		a += b;
		b += a;
	}
	if (count % 2 == 1)
		printf("%li", a);
	printf("\n");

	return (0);
}
