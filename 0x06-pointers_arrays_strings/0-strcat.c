#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to destination input
 * @src: pointer to source input
 * Return: pointer to resulting string des
*/

char *_strcat(char *dest, char *src)
{
	int a = 0, b;

	while (dest[a])
		a++;

	for (b = 0; crs[b]; b++)
		dest[a++] = src[b];

	return (dest);
}
