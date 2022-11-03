#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - function that returns a length of a string.
 * @s: The string
 * Return: Length of s.
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
