#include "main.h"

/**
 * print_number - Prints an integer using _putchar
 * @num: The number to print
 */
void print_number(int num)
{
	if (num >= 100) /* If number has 3 digits */
	{
		_putchar((num / 100) + '0'); /* Print hundreds */
		_putchar(((num / 10) % 10) + '0'); /* Print tens */
	}
	else if (num >= 10) /* If number has 2 digits */
	{
		_putchar(' ');
		_putchar((num / 10) + '0'); /* Print tens */
	}
	else /* If number has 1 digit */
	{
		_putchar(' ');
		_putchar(' ');
	}
	_putchar((num % 10) + '0'); /* Print ones */
}

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number for the times table (0 <= n <= 15)
 */
void print_times_table(int n)
{
	int row, col, product;

	if (n < 0 || n > 15) /* Ignore values out of range */
		return;

	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			product = row * col;
			if (col == 0)
				_putchar(product + '0'); /* Print first number */
			else
			{
				_putchar(',');
				_putchar(' ');
				print_number(product); /* Use helper function */
			}
		}
		_putchar('\n');
	}
}
