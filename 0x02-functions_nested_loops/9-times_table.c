#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: 0
 */

void times_table(void)
{
	int i, j, n;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			n = i * j;
			if (n > 9)
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			} else
			{
				_putchar(' ');
				_putchar(n + '0');
			}

			if ( j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
