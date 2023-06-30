#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13
 * @c: input string
 * Return: encoded string
*/

char *rot13(char *c)
{
	int i, j;
	char donn[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char donnrot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (c[i] == donn[j])
			{
				c[1] = donnrot13[j];
				break;
			}
		}
	}
	return (c);
}
