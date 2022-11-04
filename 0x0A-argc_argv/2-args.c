
#include <stdio.h>
/**
 *main - That prints all arguments it recieves
 *@argc: nummber of arguments
 *@argv: Pointer array
 *Return: Always 0.
 */

int main(int argc, char *argv[])

{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
