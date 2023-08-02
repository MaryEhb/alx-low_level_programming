#include "main.h"

/**
 * check_prime - checks prime
 * @n: num
 * @i: i
 * Return: 1, 0
 */

int check_prime(int n, int i)
{
	if (i >= n && n > 1)
		return (1);
	else if (n % i == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, i + 1));
}

/**
 * is_prime_number - check num if prime
 * @n: num
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
