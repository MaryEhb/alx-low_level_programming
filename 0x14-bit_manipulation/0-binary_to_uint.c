#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if there is one or more
 * chars in the string b that is not 0 or 1 b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, i = 0;

	if (!b)
		return (0);

	while (b[i])
	{
		if (b[i] == '1' || b[i] == '0')
			n = (n << 1) + (b[i] - '0');
		else
			return (0);
		i++;
	}

	return (n);
}
