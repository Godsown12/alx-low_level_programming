#include "main.h"
/**
 * array_range - function that creates an array of integers.
 * @min: first value of array.
 * @max: last value of  array.
 * Return: null or array
 */
int *array_range(int min, int max)
{
int *arry, i, len;
	if (min > max)
	return (NULL);
		len = max - min + 1;
	arry = malloc(sizeof(int) * len);
	if (arry == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		arry[i] = min++;
return (arry);
}
