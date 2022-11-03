#include "main.h"

/**
 * factorial - factorial of a number.
 * @n:number of a the factorial n!'
 * Return: factorial
 */

int factorial(int n)
{
	if (n == 0)
	{
	return (1);
	}
	else if (n < 1)
	{
		return (-1);
	}
	else
		return (n * factorial(n - 1));
}
