#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: length
 * Return: 0
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 1;

		while (i <= n)
		{
			int j = 1;

			while (j < i)
			{
				_putchar(' ');
				j++;
			}

			_putchar('\\');
			_putchar('\n');
			i++;

		}
	}
}
