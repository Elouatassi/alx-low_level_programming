#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: prints alphabet in reverse
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char teb;

	for (teb = 'z'; teb >= 'a'; teb--)
	putchar(teb);
	putchar('\n');
	return (0);
}
