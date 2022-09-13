#include "main.h"

/**
 * print_sign - to check for the sign of number
 * @n: int for argument
 * Return: 0 for success
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
