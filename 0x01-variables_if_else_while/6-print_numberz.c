#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print 0-9
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

	putchar('\n');

	return (0);
}
