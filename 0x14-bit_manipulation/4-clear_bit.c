#include "main.h"
#include <limits.h>
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number
 * @index: the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (!n || index >= sizeof(n) * CHAR_BIT)
		return (-1);

	mask = ~(1UL << index);

	*n = *n & mask;

	return (1);
}
