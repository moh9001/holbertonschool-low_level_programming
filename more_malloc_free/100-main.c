#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexadecimal
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *p;
	int i;

	p = malloc(sizeof(char) * 10);
	if (p == NULL)
	{
		printf("Failed to allocate memory\n");
		return (1);
	}
	for (i = 0; i < 10; i++)
		p[i] = i + 'A';

	printf("Before realloc:\n");
	simple_print_buffer(p, 10);

	p = _realloc(p, 10, 20);
	if (p == NULL)
	{
		printf("Failed to reallocate memory\n");
		return (1);
	}

	printf("After realloc:\n");
	simple_print_buffer(p, 20);
	free(p);
	return (0);
}
