#include <stdio.h>

/**
 *main - start point
 *Description: using the main function
 *Return: 0
 *
 * this program prints "Size is not grandeur
 */
int main(void)

{

	char c;
	int i;
	long int l;
	long long int ll;
	float f;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(ll));
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

return (0);
}
