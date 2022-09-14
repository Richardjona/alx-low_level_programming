#include <stdio.h>
#include "main.h"

/**
 * main - prints first 50 fibonacci numbers
 * Return: 0 success
 */

int main(void)

{
	long n = 0;
	long t1 = 1;
	long t2 = 2;
	long term = t1 + t2;

	printf("%ld, %ld, ", t1, t2);

	for (n = 0; n <= 47; n++)
	{
		printf("%ld", term);
		if (n < 47)
		{
		printf(", ");
		}
		t1 = t2;
		t2 = term;
		term = t1 + t2;
	}
	printf("\n");
	return (0);
}
