#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - Calculate and print the remaining days in the year,
 * taking leap years into account.
 *
 * @month: Month in number format.
 * @day: Day of the month.
 * @year: Year.
 *
 * Description:
 * This function calculates and prints the day of the year and the remaining
 * days in the year based on the provided date, considering leap years.
 *
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0))
	{
		if (month > 2 && day >= 60)
		{
			day++;
		}
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
