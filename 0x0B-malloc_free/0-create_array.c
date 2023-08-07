#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it with
 * a specific char.
 * @size: size
 * @c: char
 * Return: NULL if size = 0, a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
		return (0);

	i = 0;
	p = (char *)malloc(sizeof(char) * size);

	if (!p)
		return (0);

	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
