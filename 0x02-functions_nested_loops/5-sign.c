#include <stdio.h>

/**
 * print_sign - Prints the sign of a number.
 * @n: The number to check.
 *
 * Return: 1 and prints + if n is greater than zero,
 *         0 and prints 0 if n is zero,
 *        -1 and prints - if n is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+\n");
		return (1);
	}
	else if (n == 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		printf("-\n");
		return (-1);
	}
}
