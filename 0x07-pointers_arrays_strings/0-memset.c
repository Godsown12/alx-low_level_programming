#include "main.h"
#include <stdio.h>

/**
 * _memset - A function that fills memory with constant.
 * @s: Point location to the memory .
 * @b: The valuer to be coppied.
 * @n: number of bytes.
 * Return: pointer s.
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
	s[i] = b;

return (s);
}
