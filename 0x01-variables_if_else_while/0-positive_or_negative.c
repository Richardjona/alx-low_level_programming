#include <stdio.h>
#include <time.h>
/**
 * main - assign random number
 * Return: 0 always
 */

int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	return (0);

}
