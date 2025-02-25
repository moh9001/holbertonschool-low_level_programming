#include "main.h"

/**
 * leet - encode a string into 1337
 * @str: string to encode
 *
 * Return: encoded string
 */
char *leet(char *str)
{
	int i = 0, j;
	char *letters = "aAeEoOtTlL";
	char *nums = "4433007711";

	while (str[i])
	{
		j = 0;
		while (letters[j])
		{
			if (str[i] == letters[j])
			{
				str[i] = nums[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
