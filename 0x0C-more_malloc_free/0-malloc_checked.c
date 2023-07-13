#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: the size to allocate
 * Return: Nothing
*/

void *malloc_checked(unsigned int b)
{
	int *x = malloc(b);

	if (x == 0)
	{
		exit(98);
	}
	return (x);
}
