#include "holberton.h"

/**
 * print_numbers - prints the numbers, from 0 to 9.
 * followed by new line
 * Return: Always 0.
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		_putchar(i);
	_putchar('\n');
}	
