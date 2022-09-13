#include "main.h"

/**
 *  print_alphabet - lower case alphabet
 *  Return: 0 for success
 */

void print_alphabet(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al += 1)
	{
		_putchar(al);
	}
	_putchar('\n');
}
