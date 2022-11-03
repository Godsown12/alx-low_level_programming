#include "main.h"

/**
 * validation - validates number
 * @i:int
 * @j:int
 * Return: int
 */
int validation(int i, int j)
{
	if (i * i == j)
		return (i);
	if (i * i > j)
		return (-1);
	return (check(i + 1, j));
}
/**
 * _sqrt_recursion - function that returns the
 * square root of a number.
 * @n: base
 * Return: n,1.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (validation(1, n));
}
