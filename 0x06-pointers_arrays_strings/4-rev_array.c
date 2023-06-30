#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers to be reversed
 * @n: nmber of element in the array
 * Return: nothing
*/

void reverse_array(int *a, int n)
{
	int x, t;

	for (x = n - 1; x >= n / 2; x--)
	{
		t = a[n - 1 - x];
		a[n - 1 - x] = a[x];
		a[x] = t;
	}
}
