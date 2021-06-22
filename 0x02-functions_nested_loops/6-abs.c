#include "holberton.h"

/**
 * _abs -  computes the absolute value of an integer.
 * @h: the integer to check
 * Return: the absolute value
 */
int _abs(int h)
{
	if (h <= 0)
	{
		return (-1 * h);
	}
	else if (h > 0)
	{
		return (h);
	}
	return (1);
}
