#include "main.h"
/**
 * _strlen - function returns lenght of a string
 * @s: the string
 * Return: lenght
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	return (lenght);
}
