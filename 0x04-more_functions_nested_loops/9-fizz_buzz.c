#include <stdio.h>

/**
 * main - program that prints either a number
 * or fizz
 *
 * Return: 0
 */

int main(void)
{
	int num = 1;

	while (num++ < 100)

		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((num % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((num % 5) == 0)
		{
			if (num != 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("%d", num);
			}
			if (num < 100)
			{
				printf(" ");
			}
		}
		printf("\n");
		return (0);
}
