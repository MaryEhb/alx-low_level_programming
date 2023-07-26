#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: str
 * Return: str
 */

char *cap_string(char *str)
{
	char separators[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int i = 0, j;
	int foundSep = 1;

	while (str[i] != '\0')
	{
		if (foundSep && str[i] >= 'a' && str[i] <= 'z')
		{
			foundSep = 0;
			str[i] = str[i] - ('a' - 'A');
		}
		else if (foundSep && str[i] >= 'A' && str[i] <= 'Z')
		{
			foundSep = 0;
		}
		else if (!foundSep)
		{
			j = 0;
			while (j < 10)
			{
				if (str[i] == separators[j])
				{
					foundSep = 1;
					break;
				}
				j++;
			}
		}
		i++;
	}

	return (str);
}
