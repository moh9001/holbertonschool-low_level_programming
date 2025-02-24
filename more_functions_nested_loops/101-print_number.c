#include "main.h"

/**
 * print_number - prints an integer using _putchar
 * @n: the integer to print
 */
void	print_number(int n)
{
	if (n == -2147483648) /* Special case handling */
	{
		_putchar('-');
		_putchar('2'); /* Print '2' first */
		n = 147483648; /* Convert to positive 147483648 */
	}

	if (n < 0) /* Handle other negative numbers */
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10) /* Recursively print digits */
		print_number(n / 10);

	_putchar((n % 10) + '0'); /* Print last digit */
}
