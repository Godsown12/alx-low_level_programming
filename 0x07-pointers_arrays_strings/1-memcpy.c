
#include "main.h"
#include <stdio.h>
/**
 * _memcpy - function to coping from one string to another,
 * @dest: The string to copping to.
 * @src: The string to coping from.
 * @n: number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
