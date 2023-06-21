#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
*/

void print_alphabet_x10(void)
{
	int l, c;
	
	for (l = 0; l <= 9; l++)
	{

		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
        _putchar('\n');
	}
}
