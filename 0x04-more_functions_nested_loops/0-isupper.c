#include "main.h"

/**
 * _isupper - function to check uppercase letters
 * @c: letter variable to check
 *
 * Return: 1 if true else 0
 */
int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
