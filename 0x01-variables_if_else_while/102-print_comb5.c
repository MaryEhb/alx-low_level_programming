#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all possible combinations of two-digits numbers.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j < 10)
		{

			putchar(i + 48);
			putchar(j + 48);

			if (i != 9 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}

			j++;
		}

		i++;
	}

	putchar('\n');

	return (0);
}
