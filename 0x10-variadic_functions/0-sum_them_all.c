#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - A function that returns the
 * sum of all its parametrs.
 * @n: Number of parametrs
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
va_list op;
unsigned int i, sum = 0;
va_start(op, n);
for (i = 0; i < n; i++)
	sum += va_arg(op, int);
va_end(op);
return (sum);


}
