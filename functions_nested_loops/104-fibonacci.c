#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int first_high = 0, first_low = 1;
	unsigned long int second_high = 0, second_low = 2;
	unsigned long int high, low;
	int count;

	printf("%lu, %lu", first_low, second_low);

	for (count = 3; count <= 98; count++)
	{
		low = first_low + second_low;
		high = first_high + second_high;

		if (low > 9999999999) /* Handle overflow by shifting to high part */
		{
			high += low / 10000000000;
			low %= 10000000000;
		}

		if (high > 0) /* Print large numbers properly */
			printf(", %lu%010lu", high, low);
		else
			printf(", %lu", low);

		first_low = second_low;
		first_high = second_high;
		second_low = low;
		second_high = high;
	}

	printf("\n");
	return (0);
}
