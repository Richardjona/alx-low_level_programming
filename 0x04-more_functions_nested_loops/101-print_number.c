#include "main.h"

/**
 * print_number - thus funtion prints integers
 * @n: number
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('_');
	}
	if (n > 9 || n < -9)
		_putchar(n);
	if (n < 0)
		_putchar((n % 10) * -1 + '0');
	else
		_putchar((n % 10) + '0');
}
