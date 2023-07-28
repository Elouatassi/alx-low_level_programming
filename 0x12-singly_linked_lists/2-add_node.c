#include "lists.h"

/**
 * add_node - adds a new node the start of a list
 * @head: Adresse of pointer to head node
 * @str: String field of node
 * Return: Size of list
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *h = malloc(sizeof(list_t));

	if (!head || !h)
		return (NULL);
	if (str)
	{
		h->str = strdup(str);
		if (!h->str)
		{
			free(h);
			return (NULL);
		}
		h->len = strlen(h->str);
	}

	h->next = *head;
	*head = h;
	return (h);
}
