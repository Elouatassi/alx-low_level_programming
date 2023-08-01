#include "lists.h"

/**
 * find_listint_loop_fl - finds a loop in a linked list
 * @head: Linked list to search
 * Return: Adress of node
*/

listint_t *find_listint_loop_fl(listint_t *head)
{
	listint_t *ptr, *fin;

	if (head == NULL)
		return (NULL);

	for (fin = head->next; fin != NULL; fin = fin->next)
	{
		if (fin == fin->next)
			return (fin);
		for (ptr = head; ptr != fin; ptr = ptr->next)
			if (ptr == fin->next)
				return (fin->next);
	}
	return (NULL);
}

/**
 * free_listint_safe - frees a listint_t list
 * @h: head of list
 * Return: number of nodes freed
*/

size_t free_listint_safe(listint_t **h)
{
	listint_t *next, lpnode;
	size_t ln;
	int lp = 1;

	if (h == NULL || *h == NULL)
		return (0);

	lpnode = find_listint_loop_fl(*h);
	for (ln = 0; (*h != lpnode || lp) && *h != NULL; *h = next)
	{
		ln++;
		next = (*h)->next;
		if (*h == lpnode && lp)
		{
			if (lpnode == lpnode->next)
			{
				free(*h);
				break;
			}
			ln++;
			next = next->next;
			free((*h)->next);
			lp = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (ln);
}
