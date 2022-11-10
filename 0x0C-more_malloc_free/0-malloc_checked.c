#include "main.h"
/**
 * malloc_checked - Function that allocates memory using malloc.
 * @b: The size of memory
 * Return: 98 or Pointer
 */
void *malloc_checked(unsigned int b)
{
int *i;

i = malloc(b);
	if (i == NULL)
		exit(98);
return (i);
}
