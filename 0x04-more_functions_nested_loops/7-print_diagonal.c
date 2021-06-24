#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int h, g;

		for (h = 0; h < n; h++)
		{
			for (g = 0; g < n; g++)
			{
				if (g == h)
					_putchar('\\');
				else if (g < h)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
