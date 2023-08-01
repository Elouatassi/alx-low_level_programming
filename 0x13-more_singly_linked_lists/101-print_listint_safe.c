#include "lists.h"

/**
 * _r - reallocated memory for an array of pointers
 * to the nodes in a linked list
 * @list: Old list to append
 * @size: Size of new list
 * @new: New node to add to the list
 * Return: Pointer to the new list
*/

const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newlist;
	size_t i;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		newlist[i] = list[i];
	newlist[i] = new;
	free(list);
	return (newlist);
}

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: Pointer
 * Return: Number of nodes
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t x, nm = 0;
	const listint_t **lst = NULL;

	while (head != NULL)
	{
		for (x = 0; x < nm; x++)
		{
			if (head == lst[x])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(lst);
				return (nm);
			}
		}
		nm++;
		lst = _r(lst, nm, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(lst);
	return (nm);
}
