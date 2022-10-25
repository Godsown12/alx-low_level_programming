#include "main.h"
/**
 * puts2 - display every charaters in string
 * @str: variable holding the string
 */
void puts2(char *str)
{
	int s;

	for (s = 0; str[s] != '\0'; s++)
	if (s % 2 == 0)
		_putchar(str[s]);
	_putchar('\n');
}
