#include "main.h"

/**
 * rot13 - function that encodes a string into rot13
 * @s: string
 *
 * Return: s
 */
char *rot13(char *s)
{
	int i, j;
	char y[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char z[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (y[j] == *(s + i))
			{
				*(s + i) = z[j];
				break;
			}
		}
	}
	return (s);
}
