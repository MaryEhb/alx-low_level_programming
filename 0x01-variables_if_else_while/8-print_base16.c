#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print numbers base 16
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + 48);
		i++;
	}

	i = 97;
	while (i < 103)
	{
		putchar(i);
		i++;
	}

	putchar('\n');

	return (0);
}
