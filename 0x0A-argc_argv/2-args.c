#include <stdio.h>
#include "main.h"

/**
 * main - display all arguments passed into main
 * @argc: numbe od command line arguments
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
		printf("%s\n", argv[index]);

	return (0);
}
