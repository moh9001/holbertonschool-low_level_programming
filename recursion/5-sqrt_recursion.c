#include "main.h"

/**
 * find_sqrt - recursively finds the natural square root
 * @n: the number to find square root for
 * @i: the current divisor to check
 *
 * Return: natural square root or -1 if none found
 */
int find_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (find_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find square root for
 *
 * Return: natural square root or -1 if no natural square root exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 0));
}
