#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: character to be checked
 *
 * Return: returns 1 if c is lowercase or 0 for anythig else
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
