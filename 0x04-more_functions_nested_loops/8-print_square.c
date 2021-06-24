#include "holberton.h"

/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int h, g;

		for (h = 0; h < size; h++)
		{
			for (g = 0; g < size; g++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
