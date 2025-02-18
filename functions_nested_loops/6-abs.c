#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer to compute
 *
 * Return: The absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
		return (-n); /*convert negtive to postive*/
	else
		return (n); /*Return postive value as is*/
}
