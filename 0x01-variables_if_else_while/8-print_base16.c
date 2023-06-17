#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: prints numbers of base 16
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;
	char a;

	for (n = '0'; n <= '9'; n++)
	putchar(n);

	for (a = 'a'; a <= 'z'; a++)
	putchar(a);
	putchar('\n');

	return (0);
}
