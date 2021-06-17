#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "byte(s)";

	printf("Size of a char: %lu %s\n", sizeof(char), str);
	printf("Size of an int: %lu %s\n", sizeof(int), str);
	printf("Size of a long int: %lu %s\n", sizeof(long int), str);
	printf("Size of a long long int: %lu %s\n", sizeof(long long int), str);
	printf("Size of a float: %lu %s\n", sizeof(float), str);
	return (0);
}
