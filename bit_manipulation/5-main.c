#include <stdio.h>
#include "main.h"

/**
 * main - test the flip_bits function
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned int n;

	n = flip_bits(1024, 1);
	printf("%u\n", n);

	n = flip_bits(402, 98);
	printf("%u\n", n);

	n = flip_bits(1024, 3);
	printf("%u\n", n);

	n = flip_bits(1024, 1025);
	printf("%u\n", n);

	return (0);
}
