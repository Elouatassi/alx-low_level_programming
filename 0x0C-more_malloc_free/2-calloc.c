#include "main.h"

/**
 * calloc - allocates memory for an array
 * @nmemb: array lenght
 * @size: size of each element
 * Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, j = 0;
	char *m;

	if (size == 0 || nmemb == 0)
		return (NULL);

	j = nmemb * size;
	m = malloc(j);

	if (m == NULL)
		return (NULL);

	while (i < j)
	{
		m[i] = 0;
		i++;
	}
	return (m);
}
