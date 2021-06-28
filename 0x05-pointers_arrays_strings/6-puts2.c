#include "holberton.h"

/**
 * puts2 -  prints every other character of a string.
 * @str: pointer.
 * Return : always 0.
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
}
