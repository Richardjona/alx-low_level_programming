#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days -prints how many days
 * are left from a given date, puting into
 * consideraton leap years.
 * @month: month in number format
 * @day: day of the year
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
		if (month > 2)
			day++;
		printf("Day of the the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %2d/%2d/%4d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the yer: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}