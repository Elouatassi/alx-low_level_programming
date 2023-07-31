#include "lists.h"

/**
 * sum_listint - returns the sum of all the data
 * @head: Pointer
 * Return: Sum
*/

int sum_listint(listint_t *head)
{
	int som = 0;

	while (head)
	{
		som += head->n;
		head = head->next;
	}
	return (som);
}
