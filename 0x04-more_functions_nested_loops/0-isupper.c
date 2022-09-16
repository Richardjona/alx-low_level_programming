#include "main.h"

/**
 * int _isupper - a function that prints
 * upper characters
 * @c: the character
 *
 * Return: 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
