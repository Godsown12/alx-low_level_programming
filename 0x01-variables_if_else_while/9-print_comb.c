#include <stdio.h>
/**
 * main - program that prints all possible combinations
 * Return: 0
 */
int main(void)

{

	int nums;

	for (nums = 0; nums <= 9; nums++)

	{

		putchar((nums % 10) + '0');

		if (nums == 9)
		{
			continue;
		}
		putchar(',');
		putchar(' ');

	}

	putchar('\n');

	return (0);

}
