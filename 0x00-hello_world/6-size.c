#include <stdio.h>

/**
 * main - start point
 *
 * Return: set to 0 (success)
 */
int main(void)

{
	char charType;
	int  integerType;
	long int integerLong;
	long long int integerLL;
	float f;

	printf("size of a char: %ld byte(s)\n", sizeof(charType));
	printf("size of an int: %ld byte(s)\n", sizeof(integerType));
	printf("size of long int: %ld byte(s)\n", sizeof(integerLong));
	printf("size of long long int: %ld byte(s)\n", sizeof(integerLL));
	printf("size of float: %ld byte(s)\n", sizeof(f));

Return(0);

}
