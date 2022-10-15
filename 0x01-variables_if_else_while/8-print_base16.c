#include <stdio.h>
/**
 * main -prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)

{

	int nums;

	char alph;

	for (nums = 0; nums < 10; nums++)

	{
		putchar((nums % 10) + '0');
	}

	for (alph = 'a'; alph <= 'f'; alph++)

	{
		putchar(alph);
	}

	putchar('\n');

	return (0);

}
