#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width
 * @height: height
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **tableau;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	tableau = malloc(height * sizeof(int *));
	if (tableau == NULL)
	{
		free(tableau);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		tableau[i] = malloc(width * sizeof(int));
		if (tableau[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(tableau[i]);
			}
			free(tableau);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			tableau[i][j] = 0;
		}
	}

	return (tableau);
}
