#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: array of pointers to ints
 * @size: size
 * @action: function pointer taking int arg
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && size && action)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
