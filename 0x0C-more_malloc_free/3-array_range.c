#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: min
 * @max: max
 * Return: p
 */

int *array_range(int min, int max)
{
	int size, i = 0;
	int *p;

	if (min > max)
		return (0);

	size = max - min + 1;
	p = malloc(sizeof(p) * size);

	if (!p)
		return (0);
	while (min <= max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}
