
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - A function that retuns pointer to an allocated grid
 * @width: width of array.
 * @height: Height of  array
 * Return: null or point a
 */
int **alloc_grid(int width, int height)
{
int **a;
int l, b;
if (width <= 0 || height <= 0)
return (NULL);
a = malloc(sizeof(int *) * height);
if (a == NULL)
return (NULL);
for (l = 0; l < height; l++)
{
a[l] = malloc(sizeof(int) * width);
if (a[l] == NULL)
{
for (; l >= 0; l--)
free(a[l]);
return (NULL);
}
}
for (l = 0; l < height; l++)
{
for (b = 0; b < width; b++)
a[l][b] = 0;
}
return (a);
}
