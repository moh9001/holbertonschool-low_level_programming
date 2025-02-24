#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a valid random password for 101-crackme
 *
 * Return: 0 (Success)
 */
int	main(void)
{
	int	sum;
	int	target;
	char	password[100];
	int	i;

	sum = 0;
	target = 2772; /* Adjust based on analysis of `101-crackme` */
	i = 0;

	srand(time(NULL)); /* Initialize random seed */

	while (sum < target - 127) /* Generate characters while sum < target */
	{
		password[i] = (rand() % 94) + 33; /* Generate printable ASCII */
		sum += password[i];
		i++;
	}

	/* Last character to reach the target sum */
	password[i] = target - sum;
	password[i + 1] = '\0';

	printf("%s\n", password);
	return (0);
}
