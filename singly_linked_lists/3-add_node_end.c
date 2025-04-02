#include <stdlib.h>
#include "lists.h"

/**
 * _strlen - calculates the length of a string
 * @s: pointer to the string
 *
 * Return: length of the string (number of characters before '\0')
 */

unsigned int _strlen(const char *s)
{
	unsigned int len = 0;

	while (s && s[len] != '\0')
		len++;

	return (len);
}

/**
 * _strdup - duplicates a string by allocating new memory
 * @str: pointer to the string to duplicate
 *
 * Return: pointer to the newly allocated duplicate string,
 *         or NULL if allocation fails
 */

char *_strdup(const char *str)
{
	char *copy;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = str[i];
	copy[i] = '\0';

	return (copy);
}

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = _strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;
	return (new);
}
