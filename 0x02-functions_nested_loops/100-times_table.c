#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number for which the times table will be printed.
 *
 * Description:
 * This function prints the times table for the given integer n, starting with 0.
 * It will print the products of 0 to n with values 0 to 15, inclusive.
 * If n is greater than 15 or less than 0, the function does not print anything.
 *
 * Return: None (void)
 */
void print_times_table(int n)
{
    if (n < 0 || n > 15)
    {
        // Do not print anything for invalid values of n
        return;
    }

    int i, j;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= 15; j++)
        {
            int product = i * j;

            if (j > 0)
            {
                // Print a comma and space to separate values
                printf(", ");
            }

            if (product < 10)
            {
                // Add leading space for single-digit numbers
                printf("  %d", product);
            }
            else if (product < 100)
            {
                // Add leading space for two-digit numbers
                printf(" %d", product);
            }
            else
            {
                // Three-digit numbers are printed without leading spaces
                printf("%d", product);
            }
        }
        // Start a new line after each row
        printf("\n");
    }
}

int main()
{
    int n;

    printf("Enter a number (0-15): ");
    scanf("%d", &n);

    // Call the function to print the times table
    print_times_table(n);

    return 0;
}
