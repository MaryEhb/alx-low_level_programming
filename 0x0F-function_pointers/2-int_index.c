#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: pointer to the first int element in array
 * @size: size of array
 * @cmp: function pointer
 * Return:  returns the index of the first element for
 * which the cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
			i++;
		}
	}

	return (-1);
}
