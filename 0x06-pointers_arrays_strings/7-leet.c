#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: s
 * Return: str
 */

char *leet(char *str)
{
	char encodes[] = {'4', '3', '0', '7', '1'};
	char original[] = {'A', 'E', 'O', 'T', 'L'};
	int i = 0, j;

	while (str[i] != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if (str[i] == original[j] || str[i] - 32 == original[j])
			{
				str[i] = encodes[j];
				break;
			}
			j++;
		}

		i++;
	}
	return (str);
}
