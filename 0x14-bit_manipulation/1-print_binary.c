#include "main.h"
#include "limits.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: number
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int shift, leading_zeros = 1;

	if (!n)
	{
		_putchar('0');
		return;
	}

	shift = sizeof(n) * CHAR_BIT - 1;

	while (shift >= 0)
	{
		if ((n >> shift) & 1)
		{
			_putchar('1');
			leading_zeros = 0;
		}
		else if (!leading_zeros)
		{
			_putchar('0');
		}
		shift--;
	}
}
