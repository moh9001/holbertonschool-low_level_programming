#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * is_digit - Checks if a string contains only digits
 * @s: The string to check
 *
 * Return: 1 if all digits, 0 otherwise
 */
int is_digit(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}

/**
 * _strlen - Returns the length of a string
 * @s: The string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * error - Prints error message and exits with status 98
 * @ptr1: First pointer to free (can be NULL)
 * @ptr2: Second pointer to free (can be NULL)
 */
void error(void *ptr1, void *ptr2)
{
	if (ptr1)
		free(ptr1);
	if (ptr2)
		free(ptr2);
	printf("Error\n");
	exit(98);
}

/**
 * multiply - Multiplies two large numbers stored as strings
 * @num1: First number
 * @num2: Second number
 *
 * Return: Pointer to the result string
 */
char *multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1), len2 = _strlen(num2);
	int *result, i, j, mul, carry, total_len = len1 + len2;
	char *final_result;

	result = calloc(total_len, sizeof(int));
	if (!result)
		error(NULL, NULL);

	/* Perform multiplication */
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			mul = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
			carry = mul / 10;
			result[i + j + 1] = mul % 10;
		}
		result[i + j + 1] += carry;
	}

	/* Convert result array to string */
	final_result = malloc(total_len + 1);
	if (!final_result)
		error(result, NULL);

	j = 0;
	for (i = 0; i < total_len; i++)
	{
		if (result[i] == 0 && j == 0 && i != total_len - 1)
			continue;
		final_result[j++] = result[i] + '0';
	}
	final_result[j] = '\0';

	free(result); /* ✅ Free allocated memory before returning */
	return (final_result);
}

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, exits with status 98 on failure
 */
int main(int argc, char *argv[])
{
	char *result;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
		error(NULL, NULL);

	result = multiply(argv[1], argv[2]);
	printf("%s\n", result);
	free(result); /* ✅ Free the final result string */
	return (0);
}
