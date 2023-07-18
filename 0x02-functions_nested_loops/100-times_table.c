#include "main.h"
/**
 * print_times_table - print table of dim n
 * @n: num
 * Return: 0
 */

void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i = 0;

		while (i <= n)
		{
			int j = 0;

			while (j <= n)
			{
				if (j == 0)
				{
					_putchar('0');
				} else
				{
					_putchar(',');
					_putchar(' ');
					if (i * j > 99)
					{
						_putchar(i * j / 100 + '0');
						_putchar((i * j) % 100 / 10 + '0');
						_putchar((i * j) % 10 + '0');
					} else if (i * j > 9)
					{
						_putchar(' ');
						_putchar(i * j / 10 + '0');
						_putchar((i * j) % 10 + '0');
					} else
					{
						_putchar(' ');
						_putchar(i * j + '0');
					}
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
