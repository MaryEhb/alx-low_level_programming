
#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array
 * @n: num of elements
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i = 0, tmp;

	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
		i++;
	}
}
