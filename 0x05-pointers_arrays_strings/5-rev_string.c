#include "holberton.h"

/**
 * rev_string - reverses a string.
 * @s: pointer.
 * Return: Always 0.
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
