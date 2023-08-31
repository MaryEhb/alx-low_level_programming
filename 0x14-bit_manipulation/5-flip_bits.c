#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: num1
 * @m: num2
 * Return: number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0, XoR = n ^ m;

	while (XoR)
	{
		count += (XoR & 1);
		XoR >>= 1;
	}

	return (count);
}
