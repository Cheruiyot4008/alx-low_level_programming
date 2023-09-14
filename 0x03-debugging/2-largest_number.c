#include <stdio.h>

/**
 * largest_number - Find the largest among three integers.
 * @a: The first integer.
 * @b: The second integer.
 * @c: The third integer.
 *
 * Return: The largest integer among a, b, and c.
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
		largest = a;
	else if (b >= a && b >= c)
		largest = b;
	else
		largest = c;

	return (largest);
}

/**
 * main - Entry point of the program
 *
 * Description:
 * This program demonstrates the use of the largest_number function
 * by finding the largest number among three integers and printing the result.
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	int a, b, c, largest;

	a = 10;
	b = 5;
	c = 20;

	largest = largest_number(a, b, c);

	printf("The largest number among %d, %d, and %d is %d\n", a, b, c, largest);

	return (0);
}
