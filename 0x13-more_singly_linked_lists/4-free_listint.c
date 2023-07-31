#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: Pointer
 * Return: Nothing
*/

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
