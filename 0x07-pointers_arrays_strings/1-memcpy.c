#include "main.h"
/**
 * _memcpy - function copies n bytes from area
 * src to memory dest
 * @dest: memory area to be ocopied to
 * @src: memory area to be copied from
 * @n: number of bytes to be copied
 *
 * Return: pointer to the copied memory block
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
