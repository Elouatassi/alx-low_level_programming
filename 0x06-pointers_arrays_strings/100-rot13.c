#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13
 * @s: input string
 * Return: encoded string
*/

char *rot13(char *s)
{
	int i;
	char donn[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char donnrot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *p = s;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == donn[i])
			{
				*s = donnrot13[i];
				break;
			}
		}
		s++;
	}
	return (p);
}
