#include "main.h"
#include <stdlib.h>

/**
 *  alloc_grid - nested loop to make grid
 *  @width: width input
 * @height:  is 0 or negative,
 * Return: NULL
 */
int **alloc_grid(int width, int height)

{
	int **www;
	int j, o;

	if (width <= 0 || height <= 0)
		return (NULL);

	www = malloc(sizeof(int *) * height);

	if (www == NULL)
		return (NULL);

	for (j = 0; j < height; j++)
	{
		www[j] = malloc(sizeof(int) * width);

		if (www[j] == NULL)
		{
			for (; j >= 0; j--)
				free(www[j]);

			free(www);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (o = 0; o < width; o++)
			www[j][o] = 0;
	}
	return (www);
}


