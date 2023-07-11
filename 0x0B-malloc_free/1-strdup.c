#include "main.h"

/**
 * _strdup - Duplicate a string
 * @str: string to duplicate
 * Return: The string duplicated
*/

char *_strdup(char *str)
{
	int a = 0, b = 0;
	char *x;

	if (str == NULL)
		return (NULL);

	for (; str[b] != '\0'; b++)
	;

	x = malloc(b * sizeof(*str) + 1);

	if (x == 0)
		return (NULL);

	else
	{
		for (; a < b; a++)
			x[a] = str[a];
	}
	return (x);
}
