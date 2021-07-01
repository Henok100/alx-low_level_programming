#include "holberton.h"

/**
 * _strncat -  concatenates two strings.
 * @dest: destination.
 * @src: Source.
 * @n: the bytes
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, k = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && k < n)
	{
		dest[i] = src[j];
		i++;
		j++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}
