#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number which its last difit will be printed
 * Return: last digit of n
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = (n % 10) * -1;
	}
	else
	{
		n = n % 10;
	}
	_putchar('0' + n);

	return (n);
}
