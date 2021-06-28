#include "holberton.h"

/**
 * _strlen - return the length of a string.
 * rev_string - xyz.
 * @s: pointer.
 * Return: the length of a string.
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

/**
 * rev_string - reverses a string.
 * @s: pointer.
 * Return : always 0.
 */

void rev_string(char *s)
{
	int l, i;
	char *end, *begin, tmp;

	l = _strlen(s);
	begin = s;
	end = s;

	for (i = 0; i < l - 1; l++)
		end++;
	for (i = 0; i < l / 2; i++)
	{
		tmp = *end;
		*end = *begin;
		*begin = tmp;
		end--;
		begin++;
	}

}
