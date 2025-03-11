#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all arguments of a program
 * @ac: argument count
 * @av: array of argument strings
 *
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len = 0, pos = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length needed */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++; /* Add space for '\n' */
	}

	/* Allocate memory */
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	/* Copy arguments into the new string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, pos++)
			str[pos] = av[i][j];

		str[pos] = '\n';
		pos++;
	}

	str[pos] = '\0'; /* Null terminate */
	return (str);
}
