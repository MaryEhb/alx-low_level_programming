#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: str1
 * @src: str2
 * Return: dest after str2 is concat to it
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (*src != '\0')
	{
		*(dest + i) = *src;
		src++;
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}
