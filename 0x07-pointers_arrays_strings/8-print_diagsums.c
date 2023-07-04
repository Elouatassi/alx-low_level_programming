#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: Array
 * @size: size of array
 * Return: Always 0 (Success)
*/

void print_diagsums(int *a, int size)
{
	int i, som1 = 0, som2 = 0;

	for (i = 0; i < size; i++)
	{
		som1 += a[i];
		som2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", som1);
	printf("%d\n", som2);
}
