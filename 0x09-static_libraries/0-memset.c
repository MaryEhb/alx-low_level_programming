#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer
 * @b: constent byte
 * @n: no of memory area to be filled from ptr
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
