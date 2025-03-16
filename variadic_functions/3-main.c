#include "variadic_functions.h"
#include <stddef.h>
/**
 * main - Tests the print_all function
 *
 * Return: Always 0
 */
int main(void)
{
	print_all("ceis", 'B', 3, "stSchool");
	print_all("sifc", "Hello", 3.14, 42, 'X');
	print_all("si", NULL, 100);
	return (0);
}
