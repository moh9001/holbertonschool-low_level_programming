#include "dog.h"

/**
 * free_dog - Frees allocated memory for a dog.
 * @d: Pointer to dog_t struct.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
