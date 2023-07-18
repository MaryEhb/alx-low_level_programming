#include "main.h"

/**
 * print_sign: prints the sign of a number.
 * @n: number to be checked
 * Return: 0 if n is 0, 1 if n is +ve and -1 if n is -ve
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	} else if (n > 0)
	{
		_putchar('+');
		return (1);
	} else 
	{
		_putchar('-');
		return (-1);
	}
}
