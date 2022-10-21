#include "main.h"

/**
 * print_line - draw line
 * @n: number of times the line is display
 *
 * Return: void
 */


void print_line(int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
