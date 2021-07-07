#include "holberton.h"

/**
 * my_prime_number - returns 1 if the input integer is prime.
 * @n: integer.
 * @x: integer.
 * Return: 1 or 0.
 */

int my_prime_number(int n, int x)
{
	if (x * x > n)
	{
		return (1);
	}
	if (n % x == 0)
	{
		return (0);
	}
	return (my_prime_number(n, x + 1));
}

/**
 * is_prime_number - function that returns 1 if the input integer is a prime.
 * @n: number.
 * Return: 1 or 0;
 */

int is_prime_number(int n)
{
	if (n == 1 || n == -1)
	{
		return (0);
	}
	else if (n == 2 || n == -2)
	{
		return (1);
	}
	return (my_prime_number(n, 2));
}
