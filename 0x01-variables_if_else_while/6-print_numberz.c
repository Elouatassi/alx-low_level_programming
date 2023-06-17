#include <stdio>

/**
 * main -Entry point
 *
 * Desciption:  prints all single digit numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	putchar(n);
	putchar('\n');
	return (0);
}

