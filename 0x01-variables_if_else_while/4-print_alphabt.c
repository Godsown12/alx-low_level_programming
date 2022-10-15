#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * Return: 0
 */
int main(void)

{

	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)

	{

		if (alph == 'q' || alph == 'e')

		{

			continue;

		}

		putchar(alph);

	}

	putchar('\n');

	return (0);

}
