#include "main.h"

/**
 * leet -function to encodes a string into 1337
 * @s: string
 * Return: s
 */
char *leet(char *s)
{
	int i, j;
	char y[] = "aAeEoOtTlL";
	char z[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (y[j] == s[i])
				s[i] = z[j];
		}
	}
	return (s);
}
