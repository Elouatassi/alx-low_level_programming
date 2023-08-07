#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: can't read from file %s\n"
#define ERR_NOWRITE "Error: can't write to %s\n"
#define ERR_NOCLOSE "Error: can't close fi %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)

/**
 * main - program
 * @ac: argument count
 * @av: argument vector
 * Return: 1 or 0
*/

int main(int ac, char **av)
{
	int from_fi = 0, to_fi = 0;
	ssize_t b;
	char buf[READ_BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	from_fi = open(av[1], O_RDONLY);
	if (from_fi == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	to_fi = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_fi == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);

	while ((b = read(from_fi, buf, READ_BUF_SIZE)) > 0)
		if (write(to_fi, buf, b) != b)
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	if (b == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);

	from_fi = close(from_fi);
	to_fi = close(to_fi);
	if (from_fi)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_fi), exit(100);
	if (to_fi)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_fi), exit(100);

	return (EXIT_SUCCESS);
}
