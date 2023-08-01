#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: Adress of Pointer
 * @idx: Index to new node
 * @n: Value of node
 * Return: Adresse of new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *n_node = malloc(sizeof(listint_t));
	unsigned int x = 0;

	if (!head || !n_node)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;
	if (!idx)
	{
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}
	node = *head;
	while (node)
	{
		if (x == idx - 1)
		{
			n_node->next = node->next;
			node->next = n_node;
			return (n_node);
		}
		x++;
		node = n_node;
	}
	free(n_node);
	return (NULL);
}
