#include "search_algos.h"
#include <stddef.h>
#include <stdio.h>

/**
 * binary_search - searches for a value in a sorted array of integers
 * assuming that array will be sorted in ascending order and the value
 * won’t appear more than once in array
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located. If value is not present
 * in array or if array is NULL, your function must return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t start_index = 0;
	size_t end_index = size - 1;
	size_t middle;
	size_t i;

	while (start_index <= end_index)
	{
		printf("Searching in array: ");
		i = start_index;
		while (i <= end_index)
		{
			printf("%d", array[i]);
			if (i < end_index)
				printf(", ");
			i++;
		}
		printf("\n");


		middle = (start_index + end_index) / 2;

		if (array[middle] == value)
			return (middle);
		else if (array[middle] > value)
			end_index = middle - 1;
		else
			start_index = middle + 1;
	}

	return (-1);
}
