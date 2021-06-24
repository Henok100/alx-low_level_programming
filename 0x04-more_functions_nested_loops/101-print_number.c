#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int g;

	if (n < 0)
	{
		g = -n;
		_putchar('-');
	} else
	{
		g = n;
	}

	if (g / 10)
	{
		print_number(g / 10);
	}

	_putchar((g % 10) + '0');
}
