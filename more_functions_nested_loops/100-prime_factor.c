#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of 612852475143
 *
 * Return: Always 0 (Success)
 */
int	main(void)
{
	long	num;
	long	divisor;

	num = 612852475143;
	divisor = 2;

	/* Remove all factors of 2 */
	while (num % 2 == 0)
	{
		num /= 2;
	}

	/* Check odd numbers from 3 onwards */
	divisor = 3;
	while (divisor * divisor <= num)
	{
		while (num % divisor == 0)
		{
			num /= divisor;
		}
		divisor += 2; /* Skip even numbers */
	}

	/* If num is still greater than 2, it is the largest prime factor */
	if (num > 2)
	{
		printf("%ld\n", num);
	}
	else
	{
		printf("%ld\n", divisor - 2);
	}

	return (0);
}
