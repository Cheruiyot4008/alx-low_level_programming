#include "main.h"
/**
 * print_integer - A function to priting n
 * @m: an input unsigned integer
 * Return: Nothing
 */

void print_number(int n)
{
	int divisor = 1;
	int is_negative = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		is_negative = 1;
	}

	while (n / divisor >= 10)
		divisor *= 10;

	while (divisor > 0)
	{
		_putchar((n / divisor) + '0');
		n %= divisor;
		divisor /= 10;
	}

	if (!is_negative && n == 0)
		_putchar('0');
}
