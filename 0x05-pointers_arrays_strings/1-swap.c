#include "main.h"

/**
 * swap_int - a function that swaps int
 * @a: firt value
 * @b: second value
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
