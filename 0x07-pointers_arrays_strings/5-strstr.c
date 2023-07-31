#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring.
 * @haystack: string
 * @needle: substring
 * Return:  a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j] && haystack[i + j] != '\0')
		{
			j++;
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return (NULL);
}
