#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 * @v: square root
 * Return: Integer
*/

int square(int n, int v);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find square root
 * @n: Integer
 * @v: square root
 * Return: Integer
*/

int square(int n, int v)
{
	if (v * v > n)
	{
		return (-1);
	}
	if (v * v == n)
	{
		return (v);
	}
	return (square(n, v + 1));
}
