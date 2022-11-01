#include "main.h"
#include <stdio.h>
/**
 * _strchr - Locates the first occurance of a character in a string.
 * @c: The Character.
 * @s: The occurance of c.
 * Return: c.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
	if (s[i] == c)
		return (s + i);

	}
	return ('\0');
}
