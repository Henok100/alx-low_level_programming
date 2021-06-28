#include "holberton.h"

/**
 * rev_string - reverses a string.
 * @s: pointer.
 * Return : always 0.
 */

void rev_string(char *s)
{
	int l, i;
	char *begin_ptr, *end_ptr, ch;

	l = _strlen(s);
	begin_ptr = s;
	end_ptr = s;

	for (i = 0; i < l - 1; i++)
		end_ptr++;
	for (i = 0; i < l / 2; i++)
	{
		ch = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = ch;
		begin_ptr++;
		end_ptr--;
	}
}

/**
 * _strlen - returns the length of a string.
 * @s: pointer
 * Return: length of a string.
 */

int _strlen(char *s)
{
	int h = 0;

	while (*s != '\0')
	{
		h++;
		s++;
	}
	return (h);
}
