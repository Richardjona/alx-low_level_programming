#include "main.h"

/**
 *_strcmp - this function compares two strings
 *@s1: string 1
 *@s2: string 2
 *Return: result
 */

int _strcmp(char *s1, char *s2)
{
	int result = 0;
	int i = 0;

	while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] == s2[i])
		result = 0;
	else
		result = s1[i] - s2[i];
	return (result);
}
