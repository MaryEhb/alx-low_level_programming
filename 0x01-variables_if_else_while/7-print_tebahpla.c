#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in reverse
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}

	putchar('\n');

	return (0);
}
