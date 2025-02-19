#include <stdio.h>

/**
 * main - Computes and prints the sum of even Fibonacci numbers below 4,000,000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int first = 1, second = 2, next;
	long int sum = 2; 

	while (1)
	{
		next = first + second;

		if (next >= 4000000) /* Stop when the Fibonacci term exceeds 4,000,000 */
			break;

		if (next % 2 == 0) /* Add only even numbers */
			sum += next;

		first = second; /* Move forward in the sequence */
		second = next;
	}

	printf("%ld\n", sum); /* Print the sum of even Fibonacci numbers */
	return (0);
}
