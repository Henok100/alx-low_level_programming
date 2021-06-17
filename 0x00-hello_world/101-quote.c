#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(x, 1, sizeof(x), stderr);
	return (1);
}
