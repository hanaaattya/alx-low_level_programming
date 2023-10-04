#include "main.h"
#include <stdlib.h>
#include<string.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @height: height
 * @width: width
 *
 * Return: hgt.
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **hgt;
	int j;

	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}
	hgt = (int **)malloc(height * sizeof(int));
	if (hgt == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < height; i++)
		{
		hgt[i] = (int *)malloc(width * sizeof(int));
		if (hgt[i] == NULL)
		{
			free(hgt[i]);
			free(hgt);
		return (NULL);
		}
		for (j = 0; j < width; j++)
		{
		hgt[i][j] = 0;
		}
		}
	return (hgt);
}
