#include "main.h"
/**
 * reverse_array - function that reverse array index
 * @a: the array
 * @n:integer
 * Return:void
 */
void reverse_array(int *a, int n)
{
int i, s;

for (i = 0; (i < (n - 1) / 2); i++)
	{
	s = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = s;
	}
}
