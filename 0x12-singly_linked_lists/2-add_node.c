#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 *@head: pointer to the head of the list
 *@str: string to be added
 *
 * Return: returns the address to the new element or NULL
 * if failed
*/

/*
 * Allocate memory for a new node.
 * If the allocation fails, return NULL.
 * Copy the string into a new buffer.
 * If the string copy fails, free the new node and return NULL.
 * Compute the length of the string.
 * Set the new node’s next pointer to point to the current head of the list.
 * Set the head of the list to point to the new node.
 * Return a pointer to the new node.
*/
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);

}
