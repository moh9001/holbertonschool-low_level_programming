#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: pointer to the string
 */
void	print_rev(char *s)
{
	int	len;

	len = 0;
	while (s[len] != '\0') /* Find length of string */
	{
		len++;
	}

	while (len > 0) /* Print in reverse */
	{
		_putchar(s[len - 1]);
		len--;
	}
	_putchar('\n');
}
