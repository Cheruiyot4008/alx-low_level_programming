#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the first 98 Fibonacci numbers.
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	unsigned long int fib1 = 1, fib2 = 2, next_fib;
	int count;

	printf("%lu, %lu, ", fib1, fib2);

	for (count = 2; count < 98; count++)
	{
		next_fib = fib1 + fib2;
		printf("%lu", next_fib);

		if (count < 97)
			printf(", ");
		else
			printf("\n");

		fib1 = fib2;
		fib2 = next_fib;
	}

	return (0);
}
