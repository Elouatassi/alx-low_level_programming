#include "main.h"

/**
 * print_number - prints an integer
 * @n: the to be printed
*/

void print_number(int n)
{
	unsigned int a = n;

	if (n < 0)
	{
		_putchar('_');
		a = -a;
	}
	if ((a / 10) > 0)
		print_number(a / 10);
	_putchar((a % 10) + '0');
}
