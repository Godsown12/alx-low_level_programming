#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: string.
 * @accept: holds @s.
 * Return: return a pointer or null
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	for (; *s; s++)
	{
		for (i = 0; accept[i] > '\0' ; i++)
		{
		if (*s == accept[i])
			return (s);
		}
	}
return ('\0');
}
