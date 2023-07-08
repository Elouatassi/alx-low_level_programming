#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 *
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0-success or 1 if fail
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int x, cents = 0, coins = atoi(argv[1]);
		int cent[] = {25, 10, 5, 2, 1};

		for (x = 1; x < 5; x++)
		{
			if (coins >= cent[x])
			{
				cents += coins / cent[x];
				coins = coins % cent[x];
				if (coin % cent[x] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", cents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
