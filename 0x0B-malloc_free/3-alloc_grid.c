#include "main.h"
#include "stdlib.h"

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * @width: w
 * @height: h
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **p, i, j;

	if (width <= 0 || height <= 0)
		return (0);

	p = (int **)malloc(sizeof(int *) * height);

	if (!p)
		return (0);

	i = 0;
	while (i < height)
	{
		p[i] =  (int *)malloc(sizeof(int) * width);

		if (!p[i])
		{
			j = 0;
			while (j < i)
			{
				free(p[j]);
				j++;
			}
			free(p);
			return (0);
		}

		if (!p[i])
			return (0);

		j = 0;
		while (j < width)
		{
			p[i][j] = 0;
			j++;
		}
		i++;
	}

	return (p);
}
