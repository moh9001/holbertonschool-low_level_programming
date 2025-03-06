#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: argument count
 * @argv: array of argument strings (unused)
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argv; /* Unused variable */
	printf("%d\n", argc - 1);
	return (0);
}
