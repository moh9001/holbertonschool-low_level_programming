#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string
 *
 * Return: the converted integer
 */
int	_atoi(char *s)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;

	while (s[i] != '\0') /* Traverse string */
	{
		if (s[i] == '-') /* Count minus signs */
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9') /* Convert number */
		{
			result = (result * 10) + (s[i] - '0');
			if (s[i + 1] < '0' || s[i + 1] > '9') /* Stop when number ends */
				break;
		}
		i++;
	}

	return (result * sign);
}
