#include <stdio.h>
/**
 * main -  prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k = 49;
	int i;
	int y;

	for (i = 48; i <= 56; i++)
	{
		for (y = k; y <= 57; y++)
		{
			putchar(i);
			putchar(y);
			if (i != 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
		k++;
	}
	putchar('\n');
	return (0);
}
