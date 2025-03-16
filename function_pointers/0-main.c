#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name_as_is - Prints a name as is
 * @name: The name to print
 */
void print_name_as_is(char *name)
{
	printf("Hello, my name is %s\n", name);
}

/**
 * print_name_uppercase - Prints a name in uppercase
 * @name: The name to print
 */
void print_name_uppercase(char *name)
{
	unsigned int i = 0;

	printf("Hello, my uppercase name is ");
	while (name[i])
	{
		if (name[i] >= 'a' && name[i] <= 'z')
			putchar(name[i] - 32);
		else
			putchar(name[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - Tests the print_name function
 *
 * Return: Always 0
 */
int main(void)
{
	print_name("Bob", print_name_as_is);
	print_name("Bob Dylan", print_name_uppercase);
	return (0);
}
