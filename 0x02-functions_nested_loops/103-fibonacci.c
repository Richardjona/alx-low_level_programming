#include <stdio.h>
#include "main.h"

/**
 * main - print sum of even fibonacci
 * Return: 0
 */

int main(void)
{
	int sum_of_evens = 0
	int a;
	int b;
	int sum = 1;
	a = 1;
	b = 1;

	while (b < 4000000)
	{
		sum = a + b;
		a = b
		if ((sum <= 4000000) && (sum % 2 == 0))
		sum_of_events += sum;
	}
	printf("%d\n", sum_of_events);
	return (0);
}
