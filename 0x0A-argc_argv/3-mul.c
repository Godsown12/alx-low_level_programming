#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that times 2 number
 * @argc: Number of arguments
 * @argv: Pointer array
 * Return: 1 0r 0
 */

int main(int argc, char *argv[])
{
	int product, num1, num2;

	if (argc < 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	product = num1 * num2;

	printf("%d\n", product);

	return (0);
}
