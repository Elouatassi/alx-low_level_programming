#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: always 0 (Success)
*/

int main(void)
{
	int som = 0, num;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 = 0) || (num % 5 = 0))
			som = som + num;
	}
	printf("%d\n", som);

	return (0);
}
