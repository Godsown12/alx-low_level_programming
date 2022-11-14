
#include "main.h"

/**
 * _strcat - function to join two string
 * @dest: 1st char
 * @src: 2nd char
 * Return: sting
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
