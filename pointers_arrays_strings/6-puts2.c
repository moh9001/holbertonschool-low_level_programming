#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * @str: pointer to the string
 */
void	puts2(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0') /* Iterate through string */
	{
		_putchar(str[i]); /* Print current character */
		i += 2; /* Move two steps ahead */
		if (str[i] == '\0') /* Ensure we stop correctly */
			break;
	}
	_putchar('\n');
}
