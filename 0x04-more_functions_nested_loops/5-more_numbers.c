#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14.
 * followed by a new line.
 */
void more_numbers(void)
{
	int h, g;

	for (h = 0; h < 10; h++)
	{
		for (g = 0; g < 15; g++)
		{
			if (g >= 10)
				_putchar(g / 10 + '0');
			_putchar(g % 10 + '0');
		}
		_putchar('\n');
	}
}
