#include "holberton.h"
#include <stddef.h>

/**
 * compare - returns true if `X` and `Y` are the same.
 * @X: pointer.
 * @Y: Pointer.
 * Return: True or false.
 */

int compare(char *X, char *Y)
{
	while (*X && *Y)
	{
		if (*X != *Y)
		{
			return (0);
		}
		X++;
		Y++;
	}
	return (*Y == '\0');
}

/**
 * _strstr -  a function that locates a substring.
 * @haystack: pointer
 * @needle: - pointer
 * Return:  a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && compare(haystack, needle))
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
