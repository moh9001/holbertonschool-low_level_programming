#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates memory using malloc and free
 * @ptr: pointer to the previously allocated memory
 * @old_size: size of the allocated memory
 * @new_size: new size of memory to be allocated
 *
 * Return: pointer to the newly allocated memory, or NULL if failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i, min_size;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	if (ptr != NULL)
	{
		min_size = old_size < new_size ? old_size : new_size;
		for (i = 0; i < min_size; i++)
			new_ptr[i] = ((char *)ptr)[i];

		free(ptr);
	}

	return (new_ptr);
}
