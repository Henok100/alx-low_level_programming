#include "holberton.h"

/**
 * swap_int - waps the values of two integers.
 * @a: stores a value to be swapped.
 * @b: stores a value to be swapped.
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	const int tmp = *a;
	*a = *b;
	*b = tmp;
}
