#include "main.h"

/**
 * print_to_98 - prints all natural numbers from 98
 * @n: input
 * Return: Always 0 (Succuss)
*/

void print_to_98(int n)
{
	int i;
	
	if (n > 98)
	{
		for (i = n; i > 98; i++)
		{
			_putchar(i);
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (i = n; i < 98; i--)
		{
			_putchar(i);
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar("98");
	_Putchar("\n");
	return (0);
}
