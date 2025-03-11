#include <stdlib.h>
#include "main.h"

/**
 * word_count - counts the number of words in a string
 * @str: the string to analyze
 *
 * Return: number of words
 */
int word_count(char *str)
{
	int count = 0, i = 0;

	while (str[i])
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	int i = 0, j, k, w = 0, len = 0;

	if (str == NULL || *str == '\0' || word_count(str) == 0)
		return (NULL);

	words = malloc((word_count(str) + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	while (str[i])
	{
		while (str[i] == ' ') /* Skip spaces */
			i++;
		if (str[i] == '\0')
			break;

		len = 0;
		while (str[i + len] && str[i + len] != ' ')
			len++;

		words[w] = malloc((len + 1) * sizeof(char));
		if (words[w] == NULL)
		{
			while (w--)
				free(words[w]);
			free(words);
			return (NULL);
		}

		for (j = 0, k = i; j < len; j++, k++)
			words[w][j] = str[k];

		words[w][j] = '\0';
		w++;
		i += len;
	}
	words[w] = NULL;
	return (words);
}
