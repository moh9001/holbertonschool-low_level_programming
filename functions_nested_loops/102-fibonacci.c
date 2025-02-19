#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting from 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int first = 1, second = 2, next;
	int count;

	printf("%ld, %ld", first, second);

	for (count = 3; count <= 50; count++)
	{
		next = first + second;
		printf(", %ld", next);

		first = second;
		second = next;
	}

	printf("\n");
	return (0);
}
