#include "main.h"

/**
 * print_last_digit - function that prints
 * last digit
 *@n: int argument
 * Return: 0 success
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	_putchar('0' + last_digit);
	return (last_digit);

}
