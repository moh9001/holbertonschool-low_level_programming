#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: pointer to the string
 */
void	puts_half(char *str)
{
	int	len;
	int	start;

	len = 0;
	while (str[len] != '\0') /* Find string length */
	{
		len++;
	}

	if (len % 2 == 0)
		start = len / 2; /* If even, start from middle */
	else
		start = (len - 1) / 2 + 1; /* If odd, adjust */

	while (str[start] != '\0') /* Print from start index */
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
