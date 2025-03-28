#include <stdio.h>

/**
 * main - prints numbers from 1 to 100 with FizzBuzz rules
 *
 * Return: Always 0 (Success)
 */
int	main(void)
{
	int	num;

	num = 1;
	while (num <= 100)
	{
		if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else if (num % 3 == 0)
			printf("Fizz");
		else if (num % 5 == 0)
			printf("Buzz");
		else
			printf("%d", num);
		if (num != 100)
			printf(" ");
		num++;
	}
	printf("\n");
	return (0);
}
