#include "main.h"
/**
 * print_sign - To display the sign of a number.
 * @n: number that has the sign value.
 *
 * Return: 1 and display plus if n > zero
 * 0 and display 0 if n = zero
 * -1 and disply minus if n < zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
