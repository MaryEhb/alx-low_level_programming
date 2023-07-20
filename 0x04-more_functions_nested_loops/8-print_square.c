#include "main.h"
/**
 * print_square - prints a square, followed by a new line.
 * @size: square size
 * Return: 0
 */

void print_square(int size)
{
	int j, i = 0;

	if (size <= 0)
		_putchar('\n');

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
