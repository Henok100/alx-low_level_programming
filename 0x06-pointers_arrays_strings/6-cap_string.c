#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string.
 * @x: pointer.
 * Return:  a pointer to the destination string x.
 */

char *cap_string(char *x)
{
	int i;

	for (i = 0; x[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (x[i] >= 'a' && x[i] <= 'z')
			{
				x[i] = x[i] - 32;
			}
			continue;
		}
		if (x[i] == '\t' || x[i] == '\\')
		{
			x[i] = ' ';
		}
		if (x[i] == ' ' || x[i] == '.')
		{
			++i;
			if (x[i] == ' ' || x[i] == '\n')
			{
				++i;
			}
			if (x[i] >= 'a' && x[i] <= 'z')
			{
				x[i] = x[i] - 32;
				continue;
			}
		}
		else
		{
			if (x[i] >= 'A' && x[i] <= 'Z')
			{
				x[i] = x[i] + 32;
			}
		}
	}
	return (x);
}
