#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: Linked list to search
 * Return: Address of node
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t listint_t *p, *fin;

	if (head == NULL)
		return (NULL);
	for (fin = head->next; fin != NULL; fin = fin->next)
	{
		if (fin == fin->next)
			return (fin);
		for (p = head; p != fin; p = p->next)
			if (p == fin->next)
				return (fin->next);
	}
	return (NULL);
}
