#include "main.h"
/**
 * _strlen - getting the length of the string
 * @s: string to check
 * Return: 0
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i];)
		i++;

	return (i);
}
