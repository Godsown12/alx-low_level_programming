#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followes by a new line.
 * @separator: string to be printed between the numbers.
 * @n: The numbers of intergers passed.
 * Return: 0 (success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list sb;
unsigned int i;
int num;
va_start(sb, n);
for (i = 0; i < n; i++)
{
	num = va_arg(sb, int);
	printf("%d", num);
	if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
}
printf("\n");
va_end(sb);
}
