#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer paramerter
 * Return: 0
 */

void print_number(int n)
{
	unsigned int a;

	a = n;

	if (n < 0)
	{
		_putchar('_');
		a = -n;
	}
	if ( a / 10 != 0)
	{
		print_number(a / 10);
	}
	_puchatr(a % 10) + 48);
}
