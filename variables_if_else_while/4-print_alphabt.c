#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet except 'q' and 'e' using putchar
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	}
	putchar('\n');

	return (0);
}
