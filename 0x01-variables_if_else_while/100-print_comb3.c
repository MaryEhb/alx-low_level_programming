#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all possible combinations of two-digit numbers.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (j > i)
			{
				putchar(i + 48);
				putchar(j + 48);
				if (j != 9 || i != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}

		i++;
	}

	putchar('\n');

	return (0);
}
