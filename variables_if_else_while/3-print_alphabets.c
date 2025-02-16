#include <stdio.h>



/**
 * main -Entry point
 *
 * Description: Prints the lowercase and uppercase alphabets using putchar
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
