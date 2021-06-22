#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @h: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int h)
{
	int e;

	if (h < 0)
		h = -h;

	e = h % 10;

	if (e < 0)
		e = -e;

	_putchar(e + '0');

	return (e);
}
