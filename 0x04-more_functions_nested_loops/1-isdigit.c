#include "main.h"

/**
 * _isdigit - check if the character is digit
 * @c: input
 * Return: 1 if is digit or 0 if not
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
