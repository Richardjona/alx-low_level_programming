#include "main.h"

/**
 * _strpbrk - function searches a string
 * @s: string to check
 * @accept: string to check against
 *
 * Return: pointer to byte in s that matches
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
