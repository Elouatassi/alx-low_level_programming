#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: Always 0 (Success)
*/

int main(void)
{

	long x, y;
	long num = 612852475143;
	double square = sqrt(num);

	for (x = 1; x <= square; x++)
	{
		if (num % x == 0)
		{
			y = num / x;
		}
	}
	printf("%ld\n", y);
	return (0);
}
