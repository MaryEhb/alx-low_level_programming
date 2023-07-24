#include <stdio.h>
#include "main.h"
/**
 * print_array -  prints n elements of an array of integers
 * @a: array
 * @n: number of ele printed
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i = 1;

	while (i <= n)
	{
		printf("%d", a[i - 1]);

		if (i != n)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
