#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2D array
 * @width: width input
 * @height: height input
 *
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **pointer_to_2d;
	int index = 0, col;

	if (width <= 0 || height <= 0)
		return (NULL);
	pointer_to_2d = malloc(sizeof(int) * height);
	if (pointer_to_2d == NULL)
	{
		free(pointer_to_2d);
		return (NULL);
	}
	for (index = 0; index < height; index++)
	{
		pointer_to_2d[index] = malloc(sizeof(int) * width);
		if (pointer_to_2d == NULL)
		{
			free(pointer_to_2d);
			return (NULL);
		}
		/**
		for (col = 0; col < width; col++)
		{
			pointer_to_2d[index][col] = 0;
		}
		*/
	}
	for (index = 0; index < height; index++)
		for (col = 0; col < width; col++)
			pointer_to_2d[index][col] = 0;

	return (pointer_to_2d);
}
