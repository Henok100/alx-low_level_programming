#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: input string.
 * Return: lengtsh of s.
 */

int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
}

/**
 * _isPal - helper function for is_palindrome
 * @str: input string.
 * @x: strat index.
 * @y: end index.
 * Return: 1 if true, 0 if false.
 */

int _isPal(char str[], int x, int y)
{
	if (x == y)
	{
		return (1);
	}
	if (str[x] != str[y])
	{
		return (0);
	}
	if (x < y + 1)
	{
		return (_isPal(str, x + 1, y - 1));
	}
	return (1);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: input string.
 * Return: 1 if true, 0 if false.
 */

int is_palindrome(char *s)
{
	int len = _strlen(s) - 1;

	return (_isPal(s, 0, len));
}
