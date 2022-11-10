#include "main.h"

/**
 * string_nconcat - A function that concanates two strings.
 * @s1: first string
 * @s2: second string
 * @n: The size
 * Return: null or conc
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0;
char *conc;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		n++;
	conc = malloc(sizeof(char) * (n + 1));
	if (conc == NULL)
		return (NULL);
	n = 0;
	for (i = 0; s1[i]; i++)
		conc[n++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		conc[n++] = s2[i];
	conc[n] = '\0';
	return (conc);
}
