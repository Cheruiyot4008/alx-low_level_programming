#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 * This program calculates and prints the first 98 Fibonacci numbers.
 * The numbers are separated by a comma and space, followed by a new line.
 *
 * Return: 0 on successful execution
 */
int main(void)
{
unsigned int a = 1, b = 2, next;
int count;
//Print the first two Fibonacci numbers
printf("%u, %u, ", a, b);
//Calculate and print the remaining Fibonacci numbers
for (count = 2; count < 98; count++)
{
next = a + b;
printf("%u", next);
//Add a comma and space for all numbers except the last one
if (count < 97)
printf(", ");
else
printf("\n");
//Update Fibonacci sequence values for the next iteration
a = b;
b = next;
    }

return (0);
}
