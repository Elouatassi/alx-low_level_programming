#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int som = 0;
	char *x;

	while (--argc)
	{
		for (x = argv[argc]; *x; x++)
			if (*x < 48 || *x > 57)
				return (printf("Erroe\n"), 1);
		som += atoi(argv[argc]);
	}
	printf("%d\n", som);
	return (0);
}
