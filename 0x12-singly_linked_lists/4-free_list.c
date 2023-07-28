#include "lists.h"

/**
 * free_list - frees all nodes of a list
 * @head: Pointer
 * Return: Nothing
*/

void free_list(list_t *head)
{
	list_t *n, *node;

	if (!head)
		return;

	node = head;
	while (node)
	{
		n = node->next;
		free(node->str);
		free(node);
		node = n;
	}
}
