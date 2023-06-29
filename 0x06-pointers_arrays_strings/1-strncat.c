#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most number of bytes from src
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, i;

	while (dest[a])
		a++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[a + i] = src[i];
	dest[a + i] = '\0';

	return (dest);
}
