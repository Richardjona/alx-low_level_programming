#include <unistd.h>

/**
 * main - this program prints putchar
 *
 * Return: 0 alwyays for success
 */

int main(void)
{
	write(1, "_putchar\n", 9);
	return (0);
}
