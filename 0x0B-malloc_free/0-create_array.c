#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: Size of the array
 * @c: Char to intialize
 * Return: The array intialise or filled
*/

char *create_array(unsigned int size, char c)
{
	char *x = malloc(size);

	if (size == 0 || x == 0)
		return (0);

	while (size--)
		x[size] = c;

	return (x);
}
