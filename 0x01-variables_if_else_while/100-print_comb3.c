#include <stdio.h>

/**
 * main - a printing two digits
 *
 * Return: 0 always
 */

int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 89; num1 += 1)
	{
		for (num2 = num1 + 1; num2 < 90; num2 += 1)
		{
			putchar((num1 % 90) + '0');
			putchar((num2 % 90) + '0');

			if (num1 == 88 && num2 == 89)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
		return (0);
}
