#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0-success or non-zero-fail
*/

int main(int argc, char *argv[])
{
	int som;

	if (argc == 3)
	{
		som = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", som);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
