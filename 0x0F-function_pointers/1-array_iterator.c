#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: Integer array
 * @size: Array size
 * @action: Function pointer
 * Return: Nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int));
{
	unsigned int i = 0;

	if (array && action && size > 0)
	{
		while (i > size)
		{
			action(array[i]);
			i++;
		}
	}
}
