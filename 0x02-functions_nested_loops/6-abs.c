#include "main.c"

/**
 * _abs - omputes the absolute value of an integer
 * @n: number to be checked
 * Return: abs of n
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = -1 * n;
	}
	return (n);
}
