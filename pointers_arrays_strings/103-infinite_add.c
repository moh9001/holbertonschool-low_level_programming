#include "main.h"

/**
 * infinite_add - adds two numbers stored as strings
 * @n1: first number
 * @n2: second number
 * @r: buffer to store result
 * @size_r: size of buffer
 *
 * Return: pointer to result or 0 if buffer is too small
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, sum = 0, carry = 0, digit = 0;
	int i, j, k;

	while (n1[len1])
		len1++;
	while (n2[len2])
		len2++;

	if (len1 + 2 > size_r || len2 + 2 > size_r)
		return (0);

	i = len1 - 1;
	j = len2 - 1;
	k = 0;
	r[size_r - 1] = '\0';

	for (k = size_r - 2; (i >= 0 || j >= 0 || carry); k--)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i--] - '0';
		if (j >= 0)
			sum += n2[j--] - '0';
		carry = sum / 10;
		digit = sum % 10;
		if (k < 0)
			return (0);
		r[k] = digit + '0';
	}

	return (r + k + 1);
}
