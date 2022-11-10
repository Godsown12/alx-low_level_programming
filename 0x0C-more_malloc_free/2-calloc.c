#include "main.h"
/**
 * _calloc - Allocates memory for an array using
 * @nmemb: len of array.
 * @size: size
 * Return: null or b
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *b;
char *a;
	if (nmemb == 0 || size == 0)
		return (NULL);
	b = malloc(size * nmemb);
	if (b == NULL)
		return (NULL);
	a = b;
	for (i = 0; i < (size * nmemb); i++)
		a[i] = '\0';
	return (b);
}
