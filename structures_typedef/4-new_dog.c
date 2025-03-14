#include "dog.h"
#include <string.h>

/**
 * new_dog - Creates a new dog structure.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: Pointer to new dog_t structure, or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *d;
    char *name_copy, *owner_copy;

    d = malloc(sizeof(dog_t));
    if (!d)
        return (NULL);

    name_copy = malloc(strlen(name) + 1);
    if (!name_copy)
    {
        free(d);
        return (NULL);
    }
    strcpy(name_copy, name);

    owner_copy = malloc(strlen(owner) + 1);
    if (!owner_copy)
    {
        free(name_copy);
        free(d);
        return (NULL);
    }
    strcpy(owner_copy, owner);

    d->name = name_copy;
    d->age = age;
    d->owner = owner_copy;

    return (d);
}
