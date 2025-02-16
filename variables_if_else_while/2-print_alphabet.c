#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet using putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
			putchar(ch);
    	putchar('\n');

	return (0);
}
