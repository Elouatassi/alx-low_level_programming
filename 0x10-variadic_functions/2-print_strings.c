#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n: number of strings
 * Return: nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list list;

	if (separator == NULL)
		separator = "";

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
