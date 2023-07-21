#include "variadic_functions.h"

/**
 * sum_them_all - sums variable arguments
 * @n: Number of argument
 *
 * Return: som or 0
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int som = 0, i;
	va_list arglist;

	if (n == 0)
		return (0);

	va_start(arglist, n);

	for (i = 0; i < n; i++)
	{
		som += va_arg(arglist, int);
	}
	va_end(arglist);

	return (som);
}
