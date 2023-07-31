#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * matrix of integers.
 * @a: 2d array
 * @size: size of array
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int n = 0, i = 0, j = 0, d1 = 0, d2 = 0;

	while (i < size)

	{
		j = 0;
		while (j < size)
		{
			if (i == j)
				d1 += a[n];
			if (j + i == size - 1)
				d2 += a[n];
			n++;
			j++;
		}
		i++;
	}

	printf("%d, ", d1);
	printf("%d\n", d2);
}
