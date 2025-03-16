#include "variadic_functions.h"
#include <stddef.h>
/**
 * main - Tests the print_strings function
 *
 * Return: Always 0
 */
int main(void)
{
	print_strings(", ", 2, "Jay", "Django");
	print_strings("; ", 3, "Hello", NULL, "World");
	return (0);
}
