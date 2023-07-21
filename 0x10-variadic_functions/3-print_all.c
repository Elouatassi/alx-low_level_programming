#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: Format string
 * Return: Nothing
*/

void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list list;
	char *str, *separator;

	va_start(list, format);
	separator = "";
	i = 0;

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(list, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(list, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(list, double));
				break;
			case 's':
				str = va_arg(list, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(list);
}
