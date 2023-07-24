#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: pointr to first character
 * Return: 0
 */

void rev_string(char *s)
{
	int length = 0, lengthcp;
	char temp;

	while (*(s + length) != '\0')
	{
		length++;
	}

	lengthcp = length - 1;

	for (int i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[lengthcp];
		s[lengthcp] = temp;
		lengthcp--;
	}

}
