#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number which its last difit will be printed
 * Return: last digit of n
 */

int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
