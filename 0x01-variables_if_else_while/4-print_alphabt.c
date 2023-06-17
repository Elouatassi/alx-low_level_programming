#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: print the alphabet in lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch, E, Q;

	E = 'e';
	Q = 'q';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch != E && ch != Q)
	putchar(ch)
	}
	putchar('\n')
	return (0)
}

