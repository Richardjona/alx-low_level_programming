#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line
 * @n: character number of time
 * Return: nothing
 */

void print_diagonal(int n)
{
	int l, space;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (space = 0; space < l; space++)
			{
				_putchar(' ');
			}
				_putchar('\\');
				if (l == (n - 1))
				{
					continue;
				}
				_putchar('\n');
		}
	}
	_putchar('\n');
}
