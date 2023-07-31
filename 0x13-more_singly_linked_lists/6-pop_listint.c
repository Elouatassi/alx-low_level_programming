#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: Adress of pointer
 * Return: Value of node
*/

int pop_listint(listint_t **head)
{
	listint_t *node;
	int a;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	a = (*head)->a;
	free(*head);
	*head = node;
	return (a);
}
