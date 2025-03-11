#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated copy of a string
 * @str: the string to duplicate
 *
 * Return: pointer to duplicated string, or NULL if failure
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length])
		length++;

	dup = malloc((length + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		dup[i] = str[i];

	return (dup);
}
