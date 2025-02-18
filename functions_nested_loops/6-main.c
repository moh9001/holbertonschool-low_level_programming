#include "main.h"
#include <stdio.h>

/**
 * main - Entry point, tests _abs function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r); /* Expected output: 1 */

	r = _abs(0);
	printf("%d\n", r); /* Expected output: 0 */

	r = _abs(1);
	printf("%d\n", r); /* Expected output: 1 */

	r = _abs(-98);
	printf("%d\n", r); /* Expected output: 98 */

	return (0);
}

