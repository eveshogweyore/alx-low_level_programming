#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array
 * @width: the number of rows in array
 * @height: the number of columns in array
 *
 * Return: On success (2D array pointer), otherwise (NULL)
 */
int **alloc_grid(int width, int height)
{
	int **twodarray, i, j;

	if (width == 0 || height == 0)
		return (NULL);

	twodarray = (int **)malloc(width * sizeof(int *));
	if (twodarray == NULL)
	{
		free(twodarray);
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		twodarray[i] = (int *)malloc(height * sizeof(int));
		if (twodarray[i] == NULL)
		{
			for (j = 0; j < width; j++)
				free(twodarray[j]);
			free(twodarray);
			return (NULL);
		}
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			twodarray[i][j] = 0;
	}

	return (twodarray);
}
