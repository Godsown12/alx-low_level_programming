#include "main.h"
/**
 * print_alphabet_x10 - printing alphabet
 * ten times
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char i;

	while (count <= 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		count++;
	}
