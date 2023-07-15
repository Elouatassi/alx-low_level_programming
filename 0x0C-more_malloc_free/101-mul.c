#include "main.h"

/**
 * _puts - prints a string
 * @str: string to print
 * Return: nothing
*/

void _puts(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 * Return: integer converted from string
*/

int _atoi(const char *s)
{
	unsigned int n = 0;
	int i = 1;

	do {
		if (*s == '-')
			i *= -1;
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');
		else if (n > 0)
			break;
	} while (*s++);

	return (n * i);
}

/**
 * print_int - print an integer
 * @n: int
 * Return: 0
 */

void print_int(unsigned long int n)
{
	unsigned long int divis = 1, i, num;

	for (i = 0; n / divis > 9; i++, divis /= 10)
	;

	for (; divis >= 1; n %= divis, divis /= 10)
	{
		num = n / divis;
		_putchar('0' + num);
	}
}

/**
 * main - print result of multiplies two positive numbers
 * @argc: integer
 * @argv: list
 * Return: 0
*/

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}

