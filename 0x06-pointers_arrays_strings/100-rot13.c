#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13
 * @c: input string
 * Return: encoded string
*/

char *rot13(char *c)
{
	int i;
	char donn[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char donnrot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *p = c;

	while (*c)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*c == donn[i])
			{
				*c = donnrot13[i];
				break;
			}
		}
		c++;
	}
	return (p);
}
