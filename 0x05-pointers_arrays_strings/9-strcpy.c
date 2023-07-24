#include "main.h"

/**
 * _strcpy -  copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: buffer pointer
 * @src: string pointer
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (1)
	{
		*(dest + i) = *(src + i);
		i++;

		if (*(src + i) == '\0')
			break;
	}

	return (dest);
}
