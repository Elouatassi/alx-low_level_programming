#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: Integer
 * @height: Integer
 * Return: Two dimensional array
*/

int **alloc_grid(int width, int height)
{
	int **x, a, b;

	x = malloc(sizeof(*x) * height);

	if (width <= 0 || height <= 0 || x == 0)
		return (NULL);

	else
	{
		for (a = 0; a < height; a++)
		{
			x[a] = malloc(sizeof(**x) * width);
			if (x[a] == 0)
			{
				while (a--)
					free(x[a]);
				free(x);
				return (NULL);
			}
			for (b = 0; b < width; b++)
				x[a][b] = 0;
		}
	}
	return (x);
}
