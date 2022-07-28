#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - add and displays the product of two postive integers
 * @argc: number of command line arguments
 * @argv: Array name
 * Return: 0 if success, 1 if not enough arguments passed
 */

int main(int argc, char *argv[])
{
	int first, second = 1;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (first = 1; first < 3; first++)
			second *= atoi(argv[first]);

		printf("%d\n", second);
	}

	return (0);
}
