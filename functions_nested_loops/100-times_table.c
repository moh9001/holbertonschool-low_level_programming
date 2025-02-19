#include "main.h"

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

			/* Print the first number without a leading comma */
			if (col == 0)
			{
				_putchar(product + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				/* Proper spacing */
				if (product < 10)
					_putchar(' ');
				if (product < 100)
					_putchar(' ');

				/* Print product */
				if (product >= 100)
				{
					_putchar((product / 100) + '0'); /* Print hundreds digit */
					_putchar(((product / 10) % 10) + '0'); /* Print tens digit */
				}
				else if (product >= 10)
				{
					_putchar((product / 10) + '0'); /* Print tens digit */
				}
				_putchar((product % 10) + '0'); /* Print ones digit */
			}
		}
		_putchar('\n');
	}
}
