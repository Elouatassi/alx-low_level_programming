#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: print the alphabet in lowercase and in uprercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	putchar(alph);

	for (alph = 'A'; alph <= 'Z'; alph++)
	putchar(alph);
	putchar('\n');

	return (0);
}
