#include "holberton.h"

/**
 * mysqrt - a function that returns the natural square root of a number.
 * @n: integer.
 * @x: number.
 * Return:  the natural square root of a number.
 */

int mysqrt(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
	if (x * x == n)
	{
		return (x);
	}
	return (mysqrt(n, x + 1));
}

/**
 * _sqrt_recursion - a function that returns the natural square root of
 * a number.
 * @n: integer.
 * Return: the natural square root of a number.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (mysqrt(n, 1));
}
