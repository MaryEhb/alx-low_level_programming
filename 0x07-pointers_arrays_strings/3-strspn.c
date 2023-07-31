#include "main.h"

/**
 * _strspn: gets the length of a prefix substring.
 * @s: 
 * @accept:
 * Return: the number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, bytes = 0;

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
