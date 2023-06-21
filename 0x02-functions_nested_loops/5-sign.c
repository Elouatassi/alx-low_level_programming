#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: number to be checked
 *
 * Return: return 1 if n is postive -1 if n is negative or 0 for anythig else
*/

int print_sign(int n)
{
	if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
