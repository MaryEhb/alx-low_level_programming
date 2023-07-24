#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: pointr to first character
 * Return: 0
 */

void rev_string(char *s)
{
	int length = 0, lengthcp, i = 0;
	char temp;

	while (*(s + length) != '\0')
	{
		length++;
	}

	lengthcp = length - 1;

	while (i < length / 2)
	{
		temp = s[i];
		s[i] = s[lengthcp];
		s[lengthcp] = temp;
		lengthcp--;
		i++;
	}

}
