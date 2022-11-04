#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that adds positive numbers,
 * @argc: Number of arguments
 * @argv: Pointer array
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i, j = 0;
	int max_total = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')

			{
				printf("Error\n");
				return (1);
			}
		}
		max_total += atoi(argv[i]);
	}
	printf("%d\n", max_total);
	return (0);
}
