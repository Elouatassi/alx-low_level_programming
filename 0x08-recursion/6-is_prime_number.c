#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - check if n is a prime number
 * @n: Integer
 * @i: Integer
 * Return: 0 or 1
*/

int check_prime(int n, int i);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check if number is a prime
 * @n: Integer
 * @i: Integer
 * Return: Integer
*/

int check_prime(int n, int i)
{
	if (i >= n && n > 1)
	{
		return (1);
	}
	if (n % i == 0 || i <= 1)
	{
		return (0);
	}
	return (check_prime(n, i + 1));
}
