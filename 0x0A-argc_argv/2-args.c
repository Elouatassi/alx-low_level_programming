#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
