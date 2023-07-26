#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: detination
 * @src: Source
 * @n: num of copied characters from source
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
