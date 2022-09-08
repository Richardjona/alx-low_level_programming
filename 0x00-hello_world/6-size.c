#include <stdio.h>

/**
 * main - start point
 *
 * Return: set to 0 (success)
 */
int main(void)

{
	char cType;
	int  iType;
	long int iLong;
	long long int iLL;
	float f;

	printf("size of a char: %ld byte(s)\n", (unsigned long)sizeof(cType));
	printf("size of an int: %ld byte(s)\n", (unsigned long)sizeof(iType));
	printf("size of long int: %ld byte(s)\n", (unsigned long)sizeof(iLong));
	printf("size of long long int: %ld byte(s)\n", (unsigned long)sizeof(iLL));
	printf("size of float: %ld byte(s)\n", (unsigned long)sizeof(f));

Return(0);
}
