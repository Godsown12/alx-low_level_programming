#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: NUll or pointer
 */
char *str_concat(char *s1, char *s2)
{
char *conc_str;
int i, conc_i = 0, l = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
		l++;
	conc_str = malloc(sizeof(char) * l);
	if (conc_str == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
	conc_str[conc_i++] = s1[i];
	for (i = 0; s2[i]; i++)
		conc_str[conc_i++] = s2[i];
return (conc_str);
}
