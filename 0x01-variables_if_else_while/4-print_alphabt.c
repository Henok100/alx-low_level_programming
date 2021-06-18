#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, except q and e
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l == 'q' || l == 'e')
			continue;
		putchar(l);
	}
	putchar('\n');
	return (0);
}
