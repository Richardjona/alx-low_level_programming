#include "main.h"

/**
 * print_alphabet_x10 - a function
 * that prints 10 times the alhabet
 *
 * Return: 0 success always
 */

void print_alphabet_x10(void)
{
	int i;
	char az;

	for (i = 1; i <= 10; i++)
	{
		for (az = 'a'; az <= 'z'; az++)
		{
			_putchar(az);
		}
		_putchar('\n');
	}
}
