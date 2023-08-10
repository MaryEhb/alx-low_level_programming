#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: n
 * @size: s
 * Return: p
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (size == 0 || nmemb == 0)
		return (0);

	p = malloc(nmemb * size);

	if (!p)
		return (0);
	return (p);
}
