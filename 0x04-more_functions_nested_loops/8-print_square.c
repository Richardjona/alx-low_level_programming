#include "main.h"

/**
 * print_square - prints square
 * @size: parameter
 * Return: 0
 */

void print_square(int size)
{
	int in1, in2;

	if (size > 0)
	{
		for (in1 = 0; in1 < size; in1++)
		{
		for (in2 = 0; in2 < (size - 1); in2++)
		{
			_putchar('#');
		}
		_putchar('#');
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
