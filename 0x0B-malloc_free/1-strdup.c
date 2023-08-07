#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: pointer
 */

char *_strdup(char *str)
{
	unsigned int size = 0, i = 0;
	char *p;

	if (str == 0)
		return (0);

	while (str[size])
	{
		size++;
	}

	p = (char *)malloc(sizeof(char) * size);
	if (!p)
		return (0);

	while (i <= size)
	{
		p[i] = str[i];
		i++;
	}
	return (p);
}
