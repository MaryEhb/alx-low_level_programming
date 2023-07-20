#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: triangle size
 * Return: 0
 */

void print_triangle(int size)
{
	int i = 1;

	while (i <= size)
	{
		int j = 1;

		while (j <= size - i)
		{
			_putchar(' ');
			j++;
		}

		j = 1;
		while (j <= i)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
