#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **yee;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	yee = malloc(sizeof(int *) * height);

	if (yee == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		yee[x] = malloc(sizeof(int) * width);

		if (yee[x] == NULL)
		{
			for (; x >= 0; x--)
				free(yee[x]);

			free(yee);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			mee[x][y] = 0;
	}

	return (yee);
}








