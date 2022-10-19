#include "main.h"
/**
 * _isalpha - checking for uppercase.
 * @c: letter to check.
 * Return: 1 if true else 0.
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
