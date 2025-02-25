#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer's content formatted
 * @b: buffer pointer
 * @size: buffer size
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if ((j + i) < size)
				printf("%02x", (unsigned char)b[i + j]);
			else
				printf("  ");

			if (j % 2)
				printf(" ");
		}

		for (j = 0; j < 10 && (j + i) < size; j++)
		{
			if (b[i + j] >= 32 && b[i + j] <= 126)
				printf("%c", b[i + j]);
			else
				printf(".");
		}

		printf("\n");
	}
}
