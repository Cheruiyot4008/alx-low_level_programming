#include "stdio.h"

/**
 * print_times_table - Prints a times table for numbers from 0 to 14.
 * @n: An input integer value between 0 and 14.
 *
 * Description:
 * This function prints a times table for a given integer n, where n is
 * between 0 and 14. The table is formatted with proper spacing.
 *
 * Return: Nothing.
 */
void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n <= 14)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				if ((i * j) < 10)
					_putchar(' ');
				if ((i * j) < 100)
					_putchar(' ');
				putformat(i * j);
			}
			_putchar('\n');
		}
	}
}
