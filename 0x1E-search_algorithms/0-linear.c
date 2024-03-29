#include "search_algos.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * linear_search - searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located. If value is not
 * present in array or if array is NULL, your function must return -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
