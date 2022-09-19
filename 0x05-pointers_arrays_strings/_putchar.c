#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Returm: on success 1.
 * on error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
