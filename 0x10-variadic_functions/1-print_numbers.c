#include "variadic_functions.h"

/**
 * print_numbers - prints numbers with separator
 * @separator: String separator
 * @n: Number of arguments
 * Return: Nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbs;

	va_start(numbs, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbs, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbs);
}
