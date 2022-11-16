#include "function_pointers.h"
/**
 * array_iterator - Executes the function given as a paramereter
 * on each element of an array.
 * @array: an array.
 * @size: size of an array
 * @action: A pointer to a function that needs to be executed.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
