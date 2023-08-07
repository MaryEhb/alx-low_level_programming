#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second strnig
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int size1 = 0, size2 = 0, i = 0;
	char *p;

	while (s1[size1])
	{
		size1++;
	}
	while (s2[size2])
	{
		size2++;
	}

	p = (char *)malloc(sizeof(char) * (size1 + size2 - 1));

	if (!p)
		return (0);

	while (i < size1)
	{
		p[i] = s1[i];
		i++;
	}

	i = 0;
	while (i < size2)
	{
		p[i + size1] = s2[i];
		i++;
	}
	p[i + size1] = '\0';
	return (p);
}
