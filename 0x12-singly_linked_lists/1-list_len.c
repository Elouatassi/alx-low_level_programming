#include "liste.h"

/**
 * liste_len - returns the number of elements in a linked list_t list
 * @h: Pointer
 * Return: Size of list
*/

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
