#include "main.h"

/**
 * wrdcnt - count the number of words
 * @s: string
 * Return: Integer
*/

int wrdcnt(char *s)
{
	int i, n = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\n')
				n++;
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}

/**
 * strtow - splits a string into words
 * @str: string
 * Return: Pointer
*/

char **strtow(char *str)
{
	int i, j, k, l, n = 0, ws = 0;
	char **y;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = wrdcnt(str);
	if (n == 1)
		return (NULL);
	y = (char **)malloc(n * sizeof(char *));
	if (y == NULL)
		return (NULL);
	y[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			y[ws] = (char *)malloc(j * sizeof(char));
			j--;
			if (y[ws] == NULL)
			{
				for (k = 0; k < ws; k++)
					free(y[k]);
				free(y[n - 1]);
				free(y);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				y[ws][l] = str[i + l];
			y[ws][l] = '\0';
			ws++;
			i += j;
		}
		else
			i++;
	}
	return (y);
}
