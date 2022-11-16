#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - ...
  * @argc: ...
  * @argv: ...
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	p = get_op_func(argv[2]);

	if (!p)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", p(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
