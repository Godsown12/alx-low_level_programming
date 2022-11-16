
#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - Function that searches for an interger.
 * @array: An array
 * @size: A size of an array.
 * @cmp: A pointer to a function that needs to be searched.
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
	if (array == NULL || cmp == NULL)
		return (-1);
	for (; i < size; i++)
	{
	if (cmp(array[i]) != 0)
		return (i);
	}
	return (-1);
}
