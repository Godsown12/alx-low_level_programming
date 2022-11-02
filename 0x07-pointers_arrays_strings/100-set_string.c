#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * set_string - function to sets the value of
 * a pointer to a char
 * @s: pointer
 * @to: pointing to
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
