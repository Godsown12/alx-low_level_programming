#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * _sqrt_recursion - function that returns the
 * square root of a number.
 * @n: base
 * Return: n,-1,1.
 */

int _sqrt_recursion(int n)
{
	int q = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	else if (n > 0)
	{
		n = _sqrt_recursion(q);
	}
	return (n);
}
