#include "lists.h"

/**
 * add_node_end - adds a node to the end of a list
 * @head: Adresse of pointer to head node
 * @str: str field of node
 * Return: Size of list
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !n)
		return (NULL);
	if (str)
	{
		n->str = strdup(str);
		if (!n->str)
		{
			free(n);
			return (NULL);
		}
		n->len = _strlen(n->str);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = n;
	}
	else
		*head = n;
	return (n);
}
