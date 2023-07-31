#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: Adress of pointer
 * Return: Nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *node, *x;

	if (!head)
		return;

	node = *head;
	while (node)
	{
		x = node;
		node = node->next;
		free(x);
	}
	*head = NULL;
}
