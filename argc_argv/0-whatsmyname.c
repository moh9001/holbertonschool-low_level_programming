#include <stdio.h>

/**
 * main - prints the program name, followed by a new line
 * @argc: argument count
 * @argv: array of argument strings
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argc; /* Unused variable (no need for argument count here) */
	printf("%s\n", argv[0]);
	return (0);
}
