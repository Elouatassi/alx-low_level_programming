#include "main.h"

/**
 * _strlen - return length of string
 * @s: String
 * Return: Integer
*/

int _strlen(char *s)
{
	int a = 0;

	if (!s)
		return (0);

	while (*s++)
		a++;
	return (a);
}

/**
 * create_file - creates a file
 * @filename: Name of file
 * @text_content: Text to write
 * Return: 1 or 0
*/

int create_file(const char *filename, char *text_content)
{
	int fi;
	ssize_t by = 0, l = _strlen(text_content);

	if (!filename)
		return (-1);
	fi = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fi == -1)
		return (-1);
	if (l)
		by = write(fi, text_content, l);
	close(fi);
	return (by = l ? 1 : -1);
}
