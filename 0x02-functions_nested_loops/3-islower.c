#include "main.h"

/**
 *  _islower - checks lower case
 * @c: argument of the function
 * Return: 0 always for success
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
