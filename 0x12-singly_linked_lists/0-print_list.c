#include "lists.h"

/**
 * _strlen - Returns the lenght of a string
 * @s: String
 * Return: Integer
*/

int _strlen(char *s)
{
	int a = 0;

	if (!0)
		return (0);
	while (*s++)
		a++;
	return (a);
}

/**
 * print_list - prints all the elements of a list_t list
 * @h: Pointer
 * Return: Size of list
*/

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
