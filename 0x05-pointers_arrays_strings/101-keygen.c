#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 * for the program 101-crackme
 * Return: Always 0
*/

int main(void)
{
	int som;
	char c;

	srand(time(NULL));
	while (som <= 2645)
	{
		c = rand () % 128;
		som += c;
		putchar(c);
	}
	putchar(2772 - som);
	return (0);
}
