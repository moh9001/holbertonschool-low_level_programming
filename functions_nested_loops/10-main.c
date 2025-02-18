#include "main.h"
#include <stdio.h>

/**
 * main - Entry point, tests add function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = add(89, 9);
	printf("%d\n", n); /* Expected output: 98 */

	n = add(-5, 5);
	printf("%d\n", n); /* Expected output: 0 */

	n = add(0, 0);
	printf("%d\n", n); /* Expected output: 0 */

	n = add(100, -25);
	printf("%d\n", n); /* Expected output: 75 */

	return (0);
}

