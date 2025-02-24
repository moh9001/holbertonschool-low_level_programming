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
	unsigned int	result; /* Use unsigned int to handle INT_MIN */

	i = 0;
	sign = 1;
	result = 0;

	while (s[i] != '\0') /* Traverse the string */
	{
		if (s[i] == '-') /* Handle negative sign */
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9') /* Convert number */
		{
			result = (result * 10) + (s[i] - '0');
			if (result > 2147483648) /* Prevent overflow */
				break;
		}
		else if (result > 0) /* Stop when number ends */
			break;
		i++;
	}

	/* Handle INT_MIN case explicitly */
	if (result == 2147483648 && sign == -1)
		return (-2147483648);

	return (sign * result);
}
