#include "main.h"
#include <stdlib.h>
/**
 * _strdup -> Retuns a pointer to a newly allocated space in memory.
 * that containing a duplicate of a given string.
 * @str: source string
 * Return: null or pointer
 */
char *_strdup(char *str)
{
	char *d;
	int i;
	int len = 0;

	if (str == NULL)
	return (NULL);
	for (i = 0; str[i]; i++)
		len++;
	d = malloc(sizeof(char) * (len + 1));
	if (d == NULL)
	return (NULL);
	for (i = 0; str[i]; i++)
		d[i] = str[i];
	d[len] = '\0';
	return (d);
}
