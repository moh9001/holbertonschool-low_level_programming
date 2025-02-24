#include "main.h"

/**
 * rev_string - reverses a string in place
 * @s: pointer to the string
 */
void	rev_string(char *s)
{
	int	len;
	int	i;
	char	temp;

	len = 0;
	while (s[len] != '\0') /* Find string length */
	{
		len++;
	}

	i = 0;
	while (i < len / 2) /* Swap characters */
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
		i++;
	}
}
