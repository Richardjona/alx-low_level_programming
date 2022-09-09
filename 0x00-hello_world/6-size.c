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

	printf("size of a char: %ld byte(s)\n", sizeof(c));
	printf("size of an int: %ld byte(s)\n", sizeof(i));
	printf("size of a long int: %ld byte(s)\n", sizeof(l));
	printf("size of a long long int: %ld byte(s)\n", sizeof(ll));
	printf("size of a float: %ld byte(s)\n", sizeof(f));

return (0);
}
