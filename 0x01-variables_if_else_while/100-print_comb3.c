#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int A, B;

	for (A = '0'; A < '9'; A++)
	{

	for (B = A + 1; A <= '9'; B++)
	{
	if (A != B)
	{
	putchar(A);
	putchar(B);
	if (A == '8' && B == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
