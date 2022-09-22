#include "main.h"

/**
 *_strncpy - a fuction that copies a string
 *@dest: pointer to the detinaton of content
 *to be copied
 *@src: string which will be copied
 *@n: integer
 *Return: 0 for success
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
