#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc and initializes to zero
 * @nmemb: number of elements in array
 * @size: size in bytes of each element
 *
 * Return: pointer to allocated memory, or NULL if failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		mem[i] = 0;

	return (mem);
}
