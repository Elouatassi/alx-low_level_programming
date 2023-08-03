#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: 1st Number
 * @m: 2nd Number
 * Return: Number of bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int c = 0;

	while (x)
	{
		if (x & 1ul)
			c++;
		x = x >> 1;
	}
	return (c);
}
