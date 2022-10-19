#include "main.h"
/**
 * _islower - checking for lowercase
 * letters
 * @c: letter for checking.
 * Return: 1 if condition is true else 0
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
