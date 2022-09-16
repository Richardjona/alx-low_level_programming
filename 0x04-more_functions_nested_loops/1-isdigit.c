#include "main.h"
/**
 *  _isdigit - identifies if character is a digit or not
 *  @c: character
 *  Return: 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
