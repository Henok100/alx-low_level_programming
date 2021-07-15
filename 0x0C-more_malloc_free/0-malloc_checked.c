#include "holberton.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to be malloced
 * Return: returns a void pointer
 */
void *malloc_checked(unsigned int c)
{
	void *p;

	p = malloc(c);
	if (p == NULL)
		exit(98);
	return (p);
}
