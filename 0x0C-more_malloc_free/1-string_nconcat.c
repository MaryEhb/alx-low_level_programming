#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat -  concatenates two strings.
 * @s1: char
 * @s2: char
 * @n: int
 * Return: pointer shall point to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, size1 = 0, size2 = 0;
	char *p;

	while (s1[size1] && s1)
	{
		size1++;
	}

	while (s2[size2] && s2)
	{
		size2++;
	}

	p = malloc(sizeof(p) * (size1 + n + 1));

	if (!p)
		return (0);

	while (s1 && s1[i])
	{
		p[i] = s1[i];
		i++;
	}

	while (j < n && s2 && s2[j])
	{
		p[i] = s2[j];
		i++;
		j++;
	}

	p[i] = '\0';

	return (p);
}
