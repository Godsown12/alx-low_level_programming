#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return: 0
 */
int main(void)

	/* comrade the program begins with full vawulence */

{

	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)

		putchar(alph);

	for (alph = 'A'; alph <= 'Z'; alph++)

		putchar(alph);

	putchar('\n');

	return (0);

}
