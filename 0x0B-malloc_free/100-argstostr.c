#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: Integer
 * @av: Arguments
 * Return: String
*/

char *argstostr(int ac, char **av)
{
	int c = 0, i = 0, j = 0, k = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		while (av[i][j])
		{
			c++;
			j++;
		}

		j = 0;
		i++;
	}

	s = malloc((sizeof(char) * c) + ac + 1);
	i = 0;

	while (av[i])
	{
		while (av[i][j])
		{
			s[k] = av[i][j];
			k++;
			j++;
		}
		s[k] = '\n';
		j = 0;
		k++;
		i++;
	}
	k++;
	s[k] = '\n';
	return (s);
}
