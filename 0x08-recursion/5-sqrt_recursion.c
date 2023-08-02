#include "main.h"

/**
 * get_sq - square root of a number.
 * @res: result
 * @n: num
 * Return: the natural square root of a number.
 */

int get_sq(int res, int n)
{
	if (n * n > res)
		return (-1);
	else if (n * n == res)
		return (n);
	else
		return (get_sq(res, n + 1));
}

/**
 * _sqrt_recursion - _sqrt_recursion
 * @n: res
 * Return: the natural square root of a number.
 */

int _sqrt_recursion(int n)
{
	return (get_sq(n, 1));
}
