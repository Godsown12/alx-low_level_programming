#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10
 * Return: 0
 */

int main(void)

{

	int nums

	for (nums = 0; nums < 10; nums++)

		putchar((nums % 10) + '0');

	putchar('\n');

	return (0);

}
