#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + 48);

		if (i < 9)
		{
		putchar(',');
		putchar(' ');
		}

		i++;
	}

	putchar('\n');

	return (0);
}
