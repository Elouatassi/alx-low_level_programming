#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: Check the last digit
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int n, N;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (N == 0)
		printf("Last digit of %i is %i and is 0\n", n, N);
	else if (N < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, N);
	else if (N > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, N);
	return (0);
}
