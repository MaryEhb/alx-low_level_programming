#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: s
 * @accept: a
 * Return: the number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	unsigned int bytes = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				bytes++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (bytes);
			j++;
		}
		i++;
	}

	return (bytes);
}
