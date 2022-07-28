#include <stdio.h>
#include "main.h"

/**
 * main - Prints how many arguments are passed into main
 * @argc: the number of command line arguments
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int index;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (index = 0; *argv; index++, argv++)
			;
		printf("%d\n", index - 1);
	}

	return (0);
}
