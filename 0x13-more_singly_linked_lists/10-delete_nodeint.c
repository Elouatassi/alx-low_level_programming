#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: Adress of pointer
 * @index: Index of node to delete
 * Return: 1 or -1
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *nodi;
	unsigned int x = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (x == index)
		{
			nodi->next = node->next;
			free(node);
			return (1);
		}
		x++;
		nodi = node;
		node = node->next;
	}
	return (-1);
}
