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

			int l = 0;

			while (l < 10)
			{
				int m = 0;

				while (m < 10)
				{
					putchar(i + 48);
					putchar(j + 48);
					putchar(' ');
					putchar(l + 48);
					putchar(m + 48);
					if (i != 9 || j != 9 || l != 9 || m != 9)
					{
						putchar(',');
						putchar(' ');
					}

					m++;
				}

				l++;
			}

			j++;
		}
		i++;
	}

	putchar('\n');

	return (0);
}
