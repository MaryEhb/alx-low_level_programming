#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: 0
 */

void more_numbers(void)
{
	int i = 0;
	int j = 1;

	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			if (j > 9)
			{
				_putchar('0' + j / 10);
				_putchar('0' + j % 10);
			}
			else
			{
				_putchar('0' + j);
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}