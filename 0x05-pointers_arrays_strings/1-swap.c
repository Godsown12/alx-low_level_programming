#include "main.h"
/**
 * swap_int - swaping of two integers nums.
 * @a: 1st num
 * @b: second num
 */
void swap_int(int *a, int *b)
{
		int temp;

		temp = *a;
		*a = *b;
		*b = temp;
}
