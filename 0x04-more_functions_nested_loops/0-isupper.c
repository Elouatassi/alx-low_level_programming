#include "main.h"

/**
 * _isupper - check if n is upper
 *
 * @n: input for alphabet
 *
 * Return: 1 if its uppercase or 0 if not
*/

int _isupper(int n)
{
	if (n >= 65 && n <= 90)
		return (1);
	else
		return (0);
}
