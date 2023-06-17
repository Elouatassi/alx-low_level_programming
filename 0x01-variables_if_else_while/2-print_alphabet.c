#include <stdio.h>

/**
 * main - Etry point
 *
 * Description: print all alphabet letters
 *
 * Retur: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}

