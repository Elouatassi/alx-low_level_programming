#include "main.h"

/**
 * main - prints the numbers from 1 to 100
 *	numbers are multiples of three print Fizz
 *	numbers are multiples of five print Buzz
 *	numbers which are multiples of both three and five print FizzBuzz
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0)
		{
			printf("Fizz");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz");
		}
		else if ((x % 3 == 0) && (x % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", x);
		}
		if (x != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
