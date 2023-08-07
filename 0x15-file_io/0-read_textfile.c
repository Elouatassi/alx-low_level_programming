#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: Name of file
 * @letters: Number of bytes
 * Return: Number of bytes
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fi;
	ssize_t by;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fi = open(filename, O_RDONLY);
	if (fi == -1)
		return (0);
	by = read(fi, &buf[0], letters);
	by = write(STDOUT_FILENO, &buf[0], by);
	close(fi);
	return (by);
}
