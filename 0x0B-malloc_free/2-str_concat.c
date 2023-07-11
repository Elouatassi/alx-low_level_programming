#include "main.h"

/**
 * _strlen - find length of string
 * @s: stroing
 * Return:int
*/

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}

/**
 * str_concat - concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * Return: Pointer
*/

char *str_concat(char *s1, char *s2)
{
	int a, b, i;
	char *x;

	if (s1 == NULL)
		s1 = "\0";

	if (s2 == NULL)
		s2 = "\0";

	a = _strlen(s1);
	b = _strlen(s2);
	x = malloc((a + b) * sizeof(char) + 1);
	if (x == 0)
		return (0);

	for (i = 0; i <= a + b; i++)
	{
		if (i < a)
			x[i] = s1[i];

		else
			x[i] = s2[i - a];
	}
	x[i] = '\0';
	return (x);
}
