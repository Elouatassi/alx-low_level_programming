#include "main.h"

/**
 * realloc -  reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: size of allocated space
 * @new_size: size of new memory
 * Return: NULL or ptr
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *m;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		m = malloc(new_size);
		if (m == NULL)
			return (NULL);
		return (m);
	}
	if (old_size < new_size)
	{
		m = malloc(new_size);
		if (m == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)m + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (m);
}
