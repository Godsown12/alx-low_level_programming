#include "main.h"
#include <stdio.h>

/**
 *_strstr - A function that locates a substring.
 *@haystack: The string
 *@needle: The substring
 *Return: A pointer or null
 */
char *_strstr(char *haystack, char *needle)
{
int i;
	if (*needle == 0)
		return (haystack);
	for (; *haystack; haystack++)
	{
	i = 0;
	if (haystack[i] == needle[i])
		do {
			if (needle[i + 1] == '\0')
				return (haystack);
				i++;
		} while (haystack[i] == needle[i]);
	}
	return ('\0');
