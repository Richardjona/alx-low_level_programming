#include "main.h"

/**
 * reverse_array - function that reverses contents of an array
 * @a: integer
 * @n: integer
 * Returns: 0 always
 */

void reverse_array(int *a, int n)
{
	int charc;
	int i = 0;
	int j = n - 1;

	while (i <= i)
	{
		charc = a[i];
		a[i] = a[j];
		a[j] = charc;
		j--;
		i++;
	}
}
