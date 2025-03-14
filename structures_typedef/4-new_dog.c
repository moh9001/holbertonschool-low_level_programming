#include "dog.h"

/**
 * _strdup - Duplicates a string manually.
 * @s: String to duplicate.
 *
 * Return: Pointer to new string, or NULL if memory allocation fails.
 */
char *_strdup(char *s)
{
	int i = 0, len = 0;
	char *copy;

	if (!s)
		return (NULL);

	while (s[len])
		len++;

	copy = malloc(len + 1);
	if (!copy)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = s[i];

	copy[len] = '\0';
	return (copy);
}

/**
 * new_dog - Creates a new dog structure.
 * @name: Dog's name.
 * @age: Dog's age.
 * @owner: Dog's owner.
 *
 * Return: Pointer to new dog_t struct, or NULL on failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;

	new_d = malloc(sizeof(dog_t));
	if (!new_d)
		return (NULL);

	new_d->name = _strdup(name);
	new_d->owner = _strdup(owner);

	if (!new_d->name || !new_d->owner)
	{
		free(new_d->name);
		free(new_d->owner);
		free(new_d);
		return (NULL);
	}

	new_d->age = age;
	return (new_d);
}
