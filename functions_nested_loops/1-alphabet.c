#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, using _putchar twice only
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
