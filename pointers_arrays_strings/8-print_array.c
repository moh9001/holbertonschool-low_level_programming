#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to the array
 * @n: number of elements to print
 */
void	print_array(int *a, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);

		/* Print comma and space except for last element */
		if (i < n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
