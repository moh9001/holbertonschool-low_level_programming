#include "main.h"

/**
 * main - Entry point, tests print_times_table function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_times_table(3);
	_putchar('\n');
	print_times_table(5);
	_putchar('\n');
	print_times_table(98); /* Should not print anything */
	_putchar('\n');
	print_times_table(12);

	return (0);
}
