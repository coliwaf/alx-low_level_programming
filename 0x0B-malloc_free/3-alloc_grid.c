#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to 2dimentional array of integers,
 * each element should be initialed to 0
 * @width: width of array
 * @height: height of array
 * Return: Null on failure, NULL if either width or height
 * is 0  or negative
 */
int **alloc_grid(int width, int height)
{
	int **gridprnt;
	int w_i, h_i;

	if (width < 1 || height < 1)
		return (NULL);

	gridprnt = malloc(sizeof(int *) * height);

	if (gridprnt == NULL)
		return (NULL);

	for (h_i = 0; h_i < height; h_i++)
	{
		gridprnt[h_i] = malloc(sizeof(int) * width);

		if (gridprnt[h_i] == NULL)
		{
			for (; h_i >= 0; h_i--)
				free(gridprnt[h_i]);
			free(gridprnt);
			return (NULL);
		}
	}
	for (h_i = 0; h_i < height; h_i++)
	{
		for (w_i = 0; w_i < width; w_i++)
			gridprnt[h_i][w_i] = 0;
	}
	return (gridprnt);
}
