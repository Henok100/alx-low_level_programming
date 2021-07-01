#include "holberton.h"

/**
 * rot13 - encodes a string using rot13
 * @str: input string
 * Return: encoded string
 */

char *rot13(char *str)
{
	int h;

	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (int i = 0; str[i] != '\0'; i++)
	{
		for (h = 0; h <= 52; h++)
		{
			if (*str == alpha[i])
			{
				*str = rot13[i];
				break;
			}
		}
	}
	return (str);
}
