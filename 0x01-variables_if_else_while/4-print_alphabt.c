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
	for (int i = 97; i < 123; i++)
	{
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}
	}

	putchar('\n');

	return (0);
}
