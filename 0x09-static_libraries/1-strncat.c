#include "main.h"

/**
 *_strncat - this function concactenate two strings
 *@dest: first character
 *@src: second character
 *@n: interger
 *Return: returns a pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int len2 = 0;
	int i;

	while (dest[len] != '\0')
	{
		len++;
		if (dest[len] == '\0')
		{
			for (i = 0; src[len2] != '\0' && i < n; i++)
			{
				dest[len] = src[len2];
				len++;
				len2++;
			}
			dest[len] = '\0';
		}
	}
	return (dest);
}
