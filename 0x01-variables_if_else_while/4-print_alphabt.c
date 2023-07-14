#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet accept e and q
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}
		i++;
	}

	putchar('\n');

	return (0);
}
